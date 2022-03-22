#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
	const int 	N = 5; // creates 5 values
	int 	rdnum;
	int 	min;
	
	srand(time(0));

	for(int i=0;i<N;i++){
		rdnum = rand() % 100 ;	// randomly grenerates numbers from 0-100
		cout << rdnum << "\t"; 
		if ((i==0) || ( min > rdnum)) // Chooses the min value out of the 5 values
			min = rdnum;
	}
	cout << "Min : " << min << endl;
  }