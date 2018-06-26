#include <iostream>
#include <string>
using namespace std;

int getSize();
void enterValues(int* myIntArr, string* myStrArr, float* myFloatArr, int size);

int main()
{
	cout << "Enter array size:\t";
	int size = getSize();

	cout << endl << endl;
	int* myIntArr;
	myIntArr = new int[size];
	string* myStrArr; 
	myStrArr = new string[size];
	float* myFloatArr; 
	myFloatArr = new float[size];

	enterValues(myIntArr, myStrArr, myFloatArr, size);
	
	cout << endl << endl << "Here is your data:"  << endl << endl;
	cout << "int\t string\t      float" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << myIntArr[i] << "\t " << myStrArr[i] << "\t      " << myFloatArr[i] << endl;
	}
	delete[] myIntArr;
	delete[] myStrArr;
	delete[] myFloatArr;


	cin.ignore();
	cin.get();
	return 0;
}

int getSize()
{
	int size;
	cin >> size;
	return size;
}
void enterValues(int* myIntArr, string* myStrArr, float* myFloatArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << endl << "i = " << i << endl;
		cout << "\tEnter int value:\t";
		cin >> myIntArr[i];
		cout << "\tEnter string value:\t";
		cin >> myStrArr[i];
		cout << "\tEnter float value:\t";
		cin >> myFloatArr[i];
	}
}
