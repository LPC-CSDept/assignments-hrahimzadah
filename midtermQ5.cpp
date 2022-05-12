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

void fileWrite (float result)
// What this does is opens the file to be able to write inside of.
{
    ofstream fw ("D:\\question5.txt,std::ofstream::out");
    cout << "\n Writing inside of the file...";
    fw << result << "\n";
    fw.close();
}

int main ()
{
    int N1, N2;
    float result;

    getInput (&N1, &N2);

    if (isSame(&N1, &N2)==1)
    {
        cout << "\n The numbers are equal to one another";
        exit;
    }

    else
{
    result = intDivision (&N1, &N2);
    cout << "\n Dividing both numbers is equal to: " << result;
}

filewrite(result);

exit;
}