#include "notepad.h"
#include "ui_notepad.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

struct prefs_storage{
    bool dark_bg;
} ;

extern prefs_storage prefs;

Notepad::Notepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Notepad)
{
    ui->setupUi(this);
}

Notepad::~Notepad()
{
    delete ui;
}

void Notepad::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(), tr("Text Files (*.txt);;C++ Files (*.cpp *.h)") );

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Cannot open file") );
            return;
        }
        QTextStream in(&file);
        ui->textEdit1->setText(in.readAll());
        file.close();
    }
}

void Notepad::on_actionSave_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"), QString(), tr("Text Files (*.txt);;C++ Files (*.cpp *.h);;All Files (*)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)){
            QMessageBox::critical(this, tr("Error"), tr("Cannot write file to storage") );
        } else {
            QTextStream stream(&file);
            stream << ui->textEdit1->toPlainText();
            stream.flush();
            file.close();
        }

    }
}

void Notepad::on_actionExit_triggered()
{
    qApp->exit();
}

void Notepad::on_actionPreferences_triggered()
{

}
