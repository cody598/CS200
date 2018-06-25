#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size;
	cout << "Enter array size:\t";
	cin >> size;
	cout << endl << endl;

	int* myIntArr = new int[size];
	string* myStrArr = new string[size];
	float* myFloatArr = new float[size];
	
	for (int i = 0; i < size; i++)
	{
		cout << "i = " << i << endl;
		cout << "\tEnter int value:\t";
		cin >> myIntArr[i];
		cout << "\tEnter string value:\t";
		cin >> myStrArr[i];
		cout << "\tEnter float value:\t";
		cin >> myFloatArr[i];
	}
	cout << endl << endl << "Here is your data:"  << endl << endl;
	cout << "int\t string\t  float" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << myIntArr[i] << "\t " << myStrArr[i] << "\t " << myFloatArr[i];
	}



	cin.ignore();
	cin.get();
	return 0;
}
