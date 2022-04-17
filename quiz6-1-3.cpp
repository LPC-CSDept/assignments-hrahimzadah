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
void printResult (int n1,int n2, int n3, int min)
{
    cout << "\n n1:" << n1 << "\n n2:" << n2 << "\n n3:" << n3 << endl;
    cout << "The minimum value is: " << min << endl;
}

int main ()
{
    int n1 = 0, n2 = 0, n3 = 0;
    getRandnum (n1,n2,n3);

    cout << n1 << " " << n2 << " " << n3 << endl;
    int min = findMin (n1,n2,n3);
    printResult (n1,n2,n3,min);

    return 0;
}