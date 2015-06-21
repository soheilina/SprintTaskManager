#include "task.h"

Task::Task()
{
}
Task :: ~Task(){

}

void Task :: Get(int prio, QString desc, int due){
    priority = prio;
    cout << priority << endl;
    description = desc;
    due = due;
}
