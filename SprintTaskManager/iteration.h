#ifndef ITERATION_H
#define ITERATION_H

#include "task.h"

class Iteration : public Task
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
