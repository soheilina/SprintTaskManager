#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <QTextStream>

using namespace std;

class Task
{
public:
    Task();
    ~Task();
    void Get(int prio, QString desc, int due);
private:
    int priority; // 'low'=0 , 'normal'=1 ,'urgent'=2 , 'high'=3
    QString description;
    int due;//Format:DDMMYY
};

#endif // TASK_H
