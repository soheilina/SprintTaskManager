#include "taskcontainer.h"

#include <iostream>

using namespace std;

TaskContainer::TaskContainer()
{
}

TaskContainer::~TaskContainer()
{
}

void TaskContainer:: Get(vector<Task*> tskLst)
{
    tasksList = tskLst;
}
