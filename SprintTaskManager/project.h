#ifndef PROJECT_H
#define PROJECT_H

#include "taskcontainer.h"
#include "backlog.h"
#include "iteration.h"

#include <QTextStream>
//#include <vector>

using namespace std;

class Project
{
public:
    Project();
    ~Project();
    void Get(QString n, Backlog bckLg, vector<Iteration*> itLst);
private:
    QString name;
    Backlog prjBacklog;
    vector<Iteration*> iterationsList;

};

#endif // PROJECT_H
