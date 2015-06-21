#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtCore"
#include "QtGui"
#include "createproject.h"

#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //setCentralWidget(ui->descriptionText);
    ui->treeProject->setColumnCount(2); //treeWidget has 2 col
    AddRoot("Hello","World!");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_AddProjectBtn_clicked()
{
    CreateProject nPrj;
    cout << "HERE!!!!!!!!"<<endl;
    nPrj.setModal(true);
    nPrj.exec();
}

void MainWindow::on_CancelBtn_clicked()
{
    //closeEvent(QCloseEvent *event);
}

void MainWindow :: AddRoot(QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeProject);
    itm->setText(0,name);
    itm->setText(1,description);
    ui->treeProject->addTopLevelItem(itm);

    AddChild(itm, "one", "hello");
    AddChild(itm, "two", "world!");
}
void MainWindow :: AddChild(QTreeWidgetItem *parent, QString name, QString description)
{
    QTreeWidgetItem *itm = new QTreeWidgetItem();
    itm->setText(0, name);
    itm->setText(1,description);
    parent->addChild(itm);
}

void MainWindow::on_AboutBtn_clicked()
{
    QMessageBox::information(this, "Designers", "Soheil & Zardosht");
}

void MainWindow::on_actionNew_project_triggered()
{
    CreateProject nPrj;
    cout << "HERE!!!!!!!!"<<endl;
    nPrj.setModal(true);
    nPrj.exec();
}
