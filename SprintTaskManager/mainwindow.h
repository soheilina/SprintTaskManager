#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QtCore"
#include "QtGui"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

void AddRoot(QString name, QString description);
void AddChild(QTreeWidgetItem *parent, QString name, QString description);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_CancelBtn_clicked();

    void on_AddProjectBtn_clicked();

    void on_AboutBtn_clicked();

    void on_actionNew_window_triggered();

    void on_actionNew_project_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
