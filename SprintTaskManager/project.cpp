#include "project.h"
//#include "iteration.h"

#include<iostream>
//#include<vector>

using namespace std;

Project::Project()
{
}

Project::~Project()
{
}

void Project::Get(QString n, Backlog blckLg, vector<Iteration*> itLst)
{
    name = n;
    prjBacklog = blckLg;
    iterationsList = itLst;
    //cout << name << endl;
}
