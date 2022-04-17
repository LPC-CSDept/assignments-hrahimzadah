#include <iostream>
using namespace std;

void swapTwoValues (int& , int&);
void swapTwoValues (float&, float&);

int main ()
{
    int x = 3, y = 4;
    cout << "Before swapping int: x = " << x << " y = " << y << endl;
    swapTwoValues (x,y);
    cout << "After swapping int: x = " << x << " y = " << y << endl;

    cout << "\n\n";
    float a = 3.5, b = 4.5;
    cout << "Before swapping float: a = " << a << " b = " << b << endl;
    swapTwoValues (a,b);
    cout << "After swapping float: a = " << a << " b = " << b << endl;

    
return 0;
}

void swapTwoValues (int& n1, int& n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
void swapTwoValues (float& n1, float& n2)
{
    float temp = n1;
    n1 = n2;
    n2 = temp;
}