/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew_project;
    QWidget *centralWidget;
    QTreeWidget *treeProject;
    QPushButton *AddProjectBtn;
    QPushButton *CancelBtn;
    QTextEdit *descriptionText;
    QPushButton *AboutBtn;
    QPushButton *AddProjectBtn_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(770, 478);
        actionNew_project = new QAction(MainWindow);
        actionNew_project->setObjectName(QString::fromUtf8("actionNew_project"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        treeProject = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeProject);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeProject);
        new QTreeWidgetItem(treeProject);
        treeProject->setObjectName(QString::fromUtf8("treeProject"));
        treeProject->setGeometry(QRect(30, 20, 256, 261));
        AddProjectBtn = new QPushButton(centralWidget);
        AddProjectBtn->setObjectName(QString::fromUtf8("AddProjectBtn"));
        AddProjectBtn->setGeometry(QRect(20, 320, 75, 23));
        CancelBtn = new QPushButton(centralWidget);
        CancelBtn->setObjectName(QString::fromUtf8("CancelBtn"));
        CancelBtn->setGeometry(QRect(110, 320, 75, 23));
        descriptionText = new QTextEdit(centralWidget);
        descriptionText->setObjectName(QString::fromUtf8("descriptionText"));
        descriptionText->setGeometry(QRect(320, 250, 321, 101));
        AboutBtn = new QPushButton(centralWidget);
        AboutBtn->setObjectName(QString::fromUtf8("AboutBtn"));
        AboutBtn->setGeometry(QRect(200, 320, 75, 23));
        AddProjectBtn_2 = new QPushButton(centralWidget);
        AddProjectBtn_2->setObjectName(QString::fromUtf8("AddProjectBtn_2"));
        AddProjectBtn_2->setGeometry(QRect(370, 50, 261, 101));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 770, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew_project);
        mainToolBar->addAction(actionNew_project);

        retranslateUi(MainWindow);
        QObject::connect(CancelBtn, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionNew_project->setText(QApplication::translate("MainWindow", "new project", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeProject->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "2", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = treeProject->isSortingEnabled();
        treeProject->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeProject->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("MainWindow", "ProjectName", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QApplication::translate("MainWindow", "Zar", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem2->setText(0, QApplication::translate("MainWindow", "BackLog", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(1, QApplication::translate("MainWindow", "Do", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem3->setText(0, QApplication::translate("MainWindow", "Sprint1", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(1, QApplication::translate("MainWindow", "Sht", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem4->setText(0, QApplication::translate("MainWindow", "Sprint2", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem5 = treeProject->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("MainWindow", "b", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem6 = treeProject->topLevelItem(2);
        ___qtreewidgetitem6->setText(0, QApplication::translate("MainWindow", "c", 0, QApplication::UnicodeUTF8));
        treeProject->setSortingEnabled(__sortingEnabled);

        AddProjectBtn->setText(QApplication::translate("MainWindow", "Add Project", 0, QApplication::UnicodeUTF8));
        CancelBtn->setText(QApplication::translate("MainWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        AboutBtn->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        AddProjectBtn_2->setText(QApplication::translate("MainWindow", "Task lists shows the tasks in BackLog or Sprint", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
