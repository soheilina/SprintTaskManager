#ifndef ATTACHMENT_H
#define ATTACHMENT_H

#include<vector>
#include <QTextStream>

using namespace std;

class Attachment
{
public:
    Attachment();
    ~Attachment();
    void GetFile( QString fp, QString ft);
private:
    QString FilePath;
    QString FileType;
};

#endif // ATTACHMENT_H
