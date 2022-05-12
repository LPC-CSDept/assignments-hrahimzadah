#include <iostream>
#include <fstream>
using namespace std;
void getinput (int X, int Y)
{
    cout << "Enter the value for the first number: ";
    cin >> X;
    cout << "Enter the value for the second number: ";
    cin >> Y;
}

int isSame (int X, int Y)
{
    if (X == Y)
    {
        return 1;
    }
}

float intDivision (int X, int Y)
{
    if (X > Y)
    {
        cout << "\n Divide the first number by the second number...";
        return float (X) / float (Y);
    }
    else
    {
        cout << "\n Divide the second number by the first number...";
        return float (Y) / float (X);
    }
}