/********************************************************************************
** Form generated from reading UI file 'createproject.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEPROJECT_H
#define UI_CREATEPROJECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CreateProject
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *CreateProject)
    {
        if (CreateProject->objectName().isEmpty())
            CreateProject->setObjectName(QString::fromUtf8("CreateProject"));
        CreateProject->resize(400, 300);
        buttonBox = new QDialogButtonBox(CreateProject);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(CreateProject);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 46, 13));
        textEdit = new QTextEdit(CreateProject);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(103, 50, 141, 31));

        retranslateUi(CreateProject);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateProject, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateProject, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateProject);
    } // setupUi

    void retranslateUi(QDialog *CreateProject)
    {
        CreateProject->setWindowTitle(QApplication::translate("CreateProject", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CreateProject", "name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateProject: public Ui_CreateProject {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEPROJECT_H
