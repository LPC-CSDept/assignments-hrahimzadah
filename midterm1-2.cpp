#include <iostream>
#include <fstream> 
using namespace std;

int getSum(int , int , int );
int main()
{
	ifstream ifs;
	ofstream ofs;
	int score1, score2, sum;
	string sname;
	float avg;
	
	ifs.open("students.txt");
	if ( ! ifs )
	{
		cout << "File open Error\n";
		exit(0);
	}
	
	ofs.open("studentscore.txt");
	if ( ! ofs )
	{
		cout << "File open Error\n";
		exit(0);
	}

	for (int i=0; i<10; i++)
	{
		ifs >> sname >> score1 >> score2;
		if (!ifs)
			break;
		sum = score1 + score2;
		avg = sum /2.0;
		cout << " Student Name: " << sname << " Score 1: " << score1 << " Score 2: " << score2 << " Sum : " << sum << " Avg : " << avg << endl;
		ofs << sname << " " << sum << " " << avg << endl; 
	}
	
	ifs.close();	
	ofs.close();
}
int getSum(int s1, int s2)
{
	return s1 + s2;
}
