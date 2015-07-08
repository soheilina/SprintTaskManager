#ifndef TASKCONTAINER_H
#define TASKCONTAINER_H

#include "attachment.h"
#include "task.h"

#include <vector>

using namespace std;


class TaskContainer
{
public:
    TaskContainer();
    ~ TaskContainer();
    void Get(vector<Task*> tskLst);

private:
    vector<Task*> tasksList;
};

#endif // TASKCONTAINER_H
