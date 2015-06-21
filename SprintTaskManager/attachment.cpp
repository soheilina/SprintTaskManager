#include "attachment.h"
#include <iostream>
#include <vector>

using namespace std;

Attachment::Attachment()
{
}

Attachment::~Attachment()
{
}

void Attachment :: GetFile(QString fp, QString ft){

    FilePath = fp;
    //cout << FilePath <<endl;

    FileType = ft;
    //cout << FileType <<endl;
}
