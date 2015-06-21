#ifndef CREATEPROJECT_H
#define CREATEPROJECT_H

#include <QDialog>

namespace Ui {
class CreateProject;
}

class CreateProject : public QDialog
{
    Q_OBJECT

public:
    explicit CreateProject(QWidget *parent = 0);
    ~CreateProject();

private slots:
    void on_textEdit_destroyed();

private:
    Ui::CreateProject *ui;
};

#endif // CREATEPROJECT_H
