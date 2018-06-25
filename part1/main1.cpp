#include <iostream>
#include <string>
using namespace std;

int main()
{
	int* myInt;
	string* myStr;
	float* myFloat;
	myInt = new int;
	myStr = new string;
	myFloat = new float;

	*myInt = 20;
	*myStr = "Cody";
	*myFloat = 199.99;

	cout << *myInt << "\t" << *myStr << "\t" << *myFloat;

	delete myInt;
	delete myStr;
	delete myFloat;

	cin.ignore();
	cin.get();
	return 0;
}
