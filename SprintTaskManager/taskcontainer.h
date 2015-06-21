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
    void Get(vector<Task*> tl, Attachment a);

private:
    vector<Task*> taskList;
    Attachment attached;
};

#endif // TASKCONTAINER_H
