#include "createproject.h"
#include "ui_createproject.h"
#include<QTextStream>

CreateProject::CreateProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProject)
{
    ui->setupUi(this);
}

CreateProject::~CreateProject()
{
    delete ui;
}

void CreateProject::on_textEdit_destroyed()
{
    QTextStream out(stdout);
    QString projectName = ui->textEdit->toPlainText();
    out << "projectName is: " << projectName << endl;// !!!!!!!!!!
}
