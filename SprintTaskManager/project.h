#ifndef PROJECT_H
#define PROJECT_H

#include "taskcontainer.h"

#include<QTextStream>

using namespace std;

class Project : public TaskContainer
{
public:
    Project();
    ~Project();
    void Get(QString n);
private:
    QString name;
};

#endif // PROJECT_H
