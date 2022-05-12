#include <iostream>
#include <fstream>
using namespace std;

int previous = 51;

int getRdnum(void)
{
    int A = rand() % 50 + 1;
    return A;
}
int isGreater (int n)
{
    if (n>previous)
    {
        previous = n;
        return 1;
    }
    else
    {
        previous = n;
        return 0;
    }
    return 1;  
}

int main()
{
    int N = 10;
    ofstream f("numbers.txt");
    for (int i=0;i<10;i++)
    {
        int n = getRdnum();

    }
}