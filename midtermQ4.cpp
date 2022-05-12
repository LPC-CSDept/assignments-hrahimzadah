#include <iostream>
#include <ctime>
using namespace std;

int getRdnum()
{
    srand (time(NULL));
    return rand() % 101;
}

int getRdnum(int N1)
{
    srand (time(NULL));
    return rand() % (101-N1)+N1;
}
