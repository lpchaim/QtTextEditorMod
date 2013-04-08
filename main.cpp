#include "notepad.h"
#include <QApplication>
#include <QTranslator>
#include <QFile>
#include <QTextStream>

#define configFilePath "settings.ini"       //Use / as separator, regardless of platform
#define translationFileExtension ""

struct prefs_storage{
    bool dark_bg;
} prefs, tmp_prefs, default_prefs;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

/*  SETTINGS SETUP
*/
    //Default settings initialization
    default_prefs.dark_bg = false;

    //Config file handling
    QFile configFile(configFilePath);
    configFile.open(QFile::Text);
    QTextStream configFileStream(&configFile);

    if (configFileStream.readAll() == "") {    //If it's blank, write defaults to it

        configFileStream << "default_prefs.dark_bg " << default_prefs.dark_bg << "\n";

    }

    //Read file preferences into the prefs struct
    while ( !configFileStream.atEnd() ) {
        if (configFileStream.readLine().indexOf("#") != 0){     //  If it's not a entire line comment...
            QString line = configFileStream.readLine();     //  ... parse it...
            line = line.left(line.indexOf("//")) ;  //  ...by stripping away the comments.
            if ( (line.indexOf("dark_bg" ) != -1 ) && (line.indexOf("true" ) != -1 ) ) {    //  When there are more options,
                prefs.dark_bg = true;                                                                                           //  a iterative method will be implemented.
            } else {
                prefs.dark_bg = false;
            }
        }
    }

    //Need to look more into classes so I can access ui elements from here as well
    //the logic seems to be correct though
/*
    if ( (prefs.dark_bg = true) ) {
        ui->textEdit1->setStyleSheet(QTextEdit{background-color: black});
        ui->textEdit1->setStyleSheet(QTextEdit{text-color: white});
    }
*/
/*  SETTINGS SETUP END
*/

/*  TRANSLATIONS SETUP
*/
    //Load and install translator according to system locale. Files are named with this convention in mind.
    QString locale = QLocale::system().name();
    QTranslator translator;
    translator.load(locale + translationFileExtension);
    a.installTranslator(&translator);
/*  TRANSLATIONS SETUP END
*/
    Notepad w;
    w.show();
    
    return a.exec();
}
