/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QSpinBox *spinBox;
    QLabel *label;
    QRadioButton *overwriteRadioButton;
    QRadioButton *modRadioButton_2;
    QLabel *label_2;
    QTextEdit *textEdit;
    QCheckBox *removeCheckBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 221, 81));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(160, 140, 111, 51));
        spinBox->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 140, 121, 51));
        label->setFont(font);
        overwriteRadioButton = new QRadioButton(centralwidget);
        overwriteRadioButton->setObjectName(QString::fromUtf8("overwriteRadioButton"));
        overwriteRadioButton->setGeometry(QRect(30, 210, 241, 31));
        overwriteRadioButton->setFont(font);
        overwriteRadioButton->setChecked(true);
        modRadioButton_2 = new QRadioButton(centralwidget);
        modRadioButton_2->setObjectName(QString::fromUtf8("modRadioButton_2"));
        modRadioButton_2->setGeometry(QRect(300, 210, 391, 31));
        modRadioButton_2->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 140, 201, 51));
        label_2->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(510, 140, 181, 51));
        textEdit->setFont(font);
        removeCheckBox = new QCheckBox(centralwidget);
        removeCheckBox->setObjectName(QString::fromUtf8("removeCheckBox"));
        removeCheckBox->setGeometry(QRect(30, 260, 271, 24));
        removeCheckBox->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "do magic", nullptr));
        spinBox->setSuffix(QCoreApplication::translate("MainWindow", " sec", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        overwriteRadioButton->setText(QCoreApplication::translate("MainWindow", "Overwrite files", nullptr));
        modRadioButton_2->setText(QCoreApplication::translate("MainWindow", "Add count to files", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Value (number)", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        removeCheckBox->setText(QCoreApplication::translate("MainWindow", "Remove input files", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
