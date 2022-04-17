#include <iostream>
#include <ctime>

using namespace std;

void getRandnum (int &n1, int &n2, int &n3)
{
    srand (time(0));
    n1 = rand () % 10; // using % 10 will allow the srand to pull from time up to number 10.
    n2 = rand () % 10;
    n3 = rand () % 10;
}

int findMin (int n1, int n2, int n3)
{
    int min = 0;
    if (n1 < n2)
    {
        min = n1;
    }
    else
    {
        min = n2;
    }

    if (min < n3)
    {
        return min;
    }
    else
    {
        return n3;
    }
}