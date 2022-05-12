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

int getRdnum (int N1, int N2)
{
    srand (time(NULL));
    return rand () % (N2-N1)+N1;
}

int main ()
{
    cout << getRdnum () << endl;
    cout << getRdnum (50) << endl;
    cout << getRdnum (80,90) << endl;
} 