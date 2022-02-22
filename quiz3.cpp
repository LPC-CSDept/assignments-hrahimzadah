#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int num1, num2;
    srand(time(0));

    num1 = rand () % 100 ; // 0 - 99
    cout << num1 << endl;

    num2 = rand () % 100 ; // 0 - 99
    cout << num2 << endl;

    if ( num1 > num2 )
    cout << num1 << "is greater than" << num2 << endl;
    else 
    cout << num2 << "is greater than" << num1 << endl;
}