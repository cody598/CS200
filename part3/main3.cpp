#include <iostream>
#include <string>
#include <cstdlib>      
#include <ctime> 
#include "functions.hpp"
using namespace std;

int main()
{
	srand(time(NULL)); // (At the beginning of main()) 
	cout << "How many lotto balls will there be?" << endl << ">> ";
	int size = getSize();

	int* lottoNumbers;
	lottoNumbers = new int[size];

	for (int i = 0; i < size; i++)
	{
		lottoNumbers[i] = rand() % 100;
		cout << lottoNumbers[i] << "\t";
	}

	delete[] lottoNumbers;

	cin.ignore();
	cin.get();
	return 0;
}
