#include "notepad.h"
#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString locale = QLocale::system().name();

    QTranslator translator;
    translator.load(locale);
    a.installTranslator(&translator);

    Notepad w;
    w.show();
    
    return a.exec();
}
