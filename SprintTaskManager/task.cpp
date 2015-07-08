#include "task.h"

Task::Task()
{
}
Task :: ~Task(){

}

void Task :: Get(int prio, QString desc, int due, vector<Attachment*> atchLst){
    priority = prio;
    cout << priority << endl;
    description = desc;
    due = due;
    attachmentsList = atchLst;
}
