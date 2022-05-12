#include <iostream>
#include <fstream>
using namespace std;

int previous = 51;

int getRdnum(void)
{
    int A = rand() % 50 + 1;
    return A;
}
