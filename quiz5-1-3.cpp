#include <iostream>
using namespace std;

int main() 
{

  int begin, end, i;
  bool is_prime = true;

  cout << "Enter the range begin and end: ";
  cin >> begin >> end;

  cout << "\nPrime numbers " << begin << " to " << end << " are: " << endl;

  while (begin < end) 
  {
    is_prime = true;


    if (begin == 0 || end == 1) 
    {
      is_prime = false;
    }
 
    for (i = 2; i <= begin/2; ++i) 
    {
      if (begin % i == 0) 
      {
        is_prime = false;
        break;
      }
    }
        
    if (is_prime)
      cout << begin << ", ";

    ++begin;
  }

  return 0;
}