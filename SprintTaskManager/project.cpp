#include "project.h"

#include<iostream>

using namespace std;

Project::Project()
{
}

Project::~Project()
{
}

void Project::Get(QString n)
{
    name = n;
    //cout << name << endl;
}
