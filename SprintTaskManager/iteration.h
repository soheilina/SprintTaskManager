#ifndef ITERATION_H
#define ITERATION_H

#include "taskcontainer.h"

class Iteration : public TaskContainer
{
public:
    Iteration();
    ~Iteration();
    void Get(int s, int e);
private:
    int start;//Format: DDMMYY
    int end;//Format: DDMMYY
};

#endif // ITERATION_H
