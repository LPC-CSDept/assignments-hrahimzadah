#include <iostream>

using namespace std;

int main ()
{
int M;
  float N, result = 1;


  cout << "Enter your base number:"; 
    cin >> N; // input base number
  cout << "Enter your exponent:";
    cin >> M; // input exponent number

  cout << N << "^" << M << "=";

  while (M !=0)
    {
      result *= N;
      --M;
    }
    
  cout << result;
  return 0;
  }