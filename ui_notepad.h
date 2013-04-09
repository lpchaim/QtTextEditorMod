/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Notepad
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionDiff;
    QAction *actionPreferences;
    QAction *actionExit;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit1;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuTools;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuHelp;

    void setupUi(QMainWindow *Notepad)
    {
        if (Notepad->objectName().isEmpty())
            Notepad->setObjectName(QStringLiteral("Notepad"));
        Notepad->resize(870, 546);
        Notepad->setMaximumSize(QSize(10000, 10000));
        actionOpen = new QAction(Notepad);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(Notepad);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionDiff = new QAction(Notepad);
        actionDiff->setObjectName(QStringLiteral("actionDiff"));
        actionPreferences = new QAction(Notepad);
        actionPreferences->setObjectName(QStringLiteral("actionPreferences"));
        actionExit = new QAction(Notepad);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(Notepad);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(6);
        gridLayout->setContentsMargins(2, 2, 2, 2);
        textEdit1 = new QTextEdit(centralWidget);
        textEdit1->setObjectName(QStringLiteral("textEdit1"));

        gridLayout->addWidget(textEdit1, 0, 0, 1, 1);

        Notepad->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Notepad);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 870, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuFormat = new QMenu(menuBar);
        menuFormat->setObjectName(QStringLiteral("menuFormat"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        Notepad->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuFormat->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionPreferences);

        retranslateUi(Notepad);

        QMetaObject::connectSlotsByName(Notepad);
    } // setupUi

    void retranslateUi(QMainWindow *Notepad)
    {
        Notepad->setWindowTitle(QApplication::translate("Notepad", "Notepad", 0));
        actionOpen->setText(QApplication::translate("Notepad", "Open", 0));
        actionSave->setText(QApplication::translate("Notepad", "Save", 0));
        actionDiff->setText(QApplication::translate("Notepad", "Diff", 0));
        actionPreferences->setText(QApplication::translate("Notepad", "Preferences", 0));
        actionExit->setText(QApplication::translate("Notepad", "Exit", 0));
        menuFile->setTitle(QApplication::translate("Notepad", "File", 0));
        menuTools->setTitle(QApplication::translate("Notepad", "Tools", 0));
        menuEdit->setTitle(QApplication::translate("Notepad", "Edit", 0));
        menuFormat->setTitle(QApplication::translate("Notepad", "Format", 0));
        menuHelp->setTitle(QApplication::translate("Notepad", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class Notepad: public Ui_Notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H
