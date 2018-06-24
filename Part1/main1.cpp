#include <iostream>
#include <string>
using namespace std;

int main()
{
	int myInt = 8;
	double myDouble = 7.49;
	string myString = "BigMac";

	cout << "NAME \t     ADDRESS \t SIZE \t VALUE" << endl;
	cout << "myInt        " << &myInt << "\t " << sizeof(myInt) << "\t " << myInt << endl;
	cout << "myDouble     " << &myDouble << "\t " << sizeof(myDouble) << "\t " << myDouble << endl;
	cout << "myString     " << &myString << "\t " << sizeof(myString) << "\t " << myString << endl;

	cin.ignore();
	cin.get();
	return 0;
}
