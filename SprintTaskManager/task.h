#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <QTextStream>
#include "attachment.h"

using namespace std;

class Task
{
public:
    Task();
    ~Task();
    void Get(int prio, QString desc, int due, vector<Attachment*> atchLst);
private:
    int priority;       // 'low'=0 , 'normal'=1 ,'urgent'=2 , 'high'=3
    QString description;
    int due;            //Format:DDMMYY
    vector<Attachment*> attachmentsList;

};

#endif // TASK_H
