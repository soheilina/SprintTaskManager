#include "taskcontainer.h"

#include <iostream>

using namespace std;

TaskContainer::TaskContainer()
{
}

TaskContainer::~TaskContainer()
{
}

void TaskContainer:: Get(vector<Task*> tl, Attachment a)
{
    taskList = tl;
    attached = a;
}
