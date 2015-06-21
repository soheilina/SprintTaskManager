#include "iteration.h"
#include <iostream>

using namespace std;

Iteration::Iteration()
{
}

Iteration :: ~Iteration(){

}

void Iteration :: Get(int s, int e){
    start = s;
    cout << s << endl;

    end = e;
    cout << end << endl;
}
