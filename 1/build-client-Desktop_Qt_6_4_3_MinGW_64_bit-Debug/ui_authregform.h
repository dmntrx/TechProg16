/********************************************************************************
** Form generated from reading UI file 'authregform.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHREGFORM_H
#define UI_AUTHREGFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AuthRegForm
{
public:
    QLabel *label_email;
    QPushButton *pushButton_email;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_auth;
    QPushButton *pushButton_registration;
    QLineEdit *lineEdit_login;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_email;

    void setupUi(QWidget *AuthRegForm)
    {
        if (AuthRegForm->objectName().isEmpty())
            AuthRegForm->setObjectName("AuthRegForm");
        AuthRegForm->resize(600, 400);
        AuthRegForm->setStyleSheet(QString::fromUtf8("background-color: rgb(248, 255, 243);"));
        label_email = new QLabel(AuthRegForm);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(20, 360, 43, 24));
        pushButton_email = new QPushButton(AuthRegForm);
        pushButton_email->setObjectName("pushButton_email");
        pushButton_email->setGeometry(QRect(470, 10, 123, 35));
        pushButton_email->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(255, 255, 255);\n"
"font: 300 9pt \"Yu Gothic UI Light\";"));
        layoutWidget = new QWidget(AuthRegForm);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 210, 311, 64));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_auth = new QPushButton(layoutWidget);
        pushButton_auth->setObjectName("pushButton_auth");
        pushButton_auth->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(255, 255, 255);\n"
"font: 300 9pt \"Yu Gothic UI Light\";"));

        horizontalLayout->addWidget(pushButton_auth);

        pushButton_registration = new QPushButton(layoutWidget);
        pushButton_registration->setObjectName("pushButton_registration");
        pushButton_registration->setStyleSheet(QString::fromUtf8("background-color: rgb(39, 39, 39);\n"
"color: rgb(255, 255, 255);\n"
"font: 300 9pt \"Yu Gothic UI Light\";"));

        horizontalLayout->addWidget(pushButton_registration);

        lineEdit_login = new QLineEdit(AuthRegForm);
        lineEdit_login->setObjectName("lineEdit_login");
        lineEdit_login->setGeometry(QRect(140, 100, 309, 31));
        lineEdit_login->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid rgb(39,39,39);\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255,255,255);\n"
"	padding-left:5px;\n"
"}\n"
"\n"
""));
        lineEdit_password = new QLineEdit(AuthRegForm);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(140, 140, 309, 31));
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid rgb(39,39,39);\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255,255,255);\n"
"	padding-left:5px;\n"
"}\n"
"\n"
""));
        lineEdit_email = new QLineEdit(AuthRegForm);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setGeometry(QRect(140, 180, 309, 31));
        lineEdit_email->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"	border: 1px solid rgb(39,39,39);\n"
"	border-radius: 10px;\n"
"	background-color: rgb(255,255,255);\n"
"	padding-left:5px;\n"
"}\n"
"\n"
"\n"
""));

        retranslateUi(AuthRegForm);

        QMetaObject::connectSlotsByName(AuthRegForm);
    } // setupUi

    void retranslateUi(QWidget *AuthRegForm)
    {
        AuthRegForm->setWindowTitle(QCoreApplication::translate("AuthRegForm", "Form", nullptr));
        label_email->setText(QString());
        pushButton_email->setText(QCoreApplication::translate("AuthRegForm", "Sign up", nullptr));
        pushButton_auth->setText(QCoreApplication::translate("AuthRegForm", "Authentification", nullptr));
        pushButton_registration->setText(QCoreApplication::translate("AuthRegForm", "Registration", nullptr));
        lineEdit_login->setText(QString());
        lineEdit_password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AuthRegForm: public Ui_AuthRegForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHREGFORM_H
