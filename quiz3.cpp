#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main ()
{
    double num1, num2, num3;
    double summation;
    double average;

    srand(time(0));

    num1 = rand () % 100 ; // 0 - 99
    cout << num1 << endl;

    num2 = rand () % 100 ; // 0 - 99
    cout << num2 << endl;

    num3 = rand () % 100 ; // 0 - 99
    cout << num3 << endl;

    cout << "Press 'Enter' to see summation" << endl;
    cin.get();

    cout << "Adding numbers : " << num1 << "+" << num2 << "+" << num3 << endl;

    summation = num1 + num2 + num3;

    cout << "Total number is: " << summation << endl;

    cout << "Press 'Enter' to see average" << endl;

    average = (num1 + num2 + num3) / 3;

    cout << "Average is:" << setprecision(5) << average << endl;

    return 0;

}