#include <iostream>
#include <string>
using namespace std;

void Program1()
{
	const int MAX_CLASSES = 6;
	string classes[ MAX_CLASSES ];
	int studentClassCount = 0;
	string userInput;

	cout << "CLASS LIST" << endl << endl;

	for (int i = 0; i < MAX_CLASSES; i++)
	{
		cout << "Enter class " << i << " or type STOP: \t";
		cin >> userInput;
		cin.ignore();
		studentClassCount++;

		if (userInput == "STOP")
		{
			cout << endl;
			break;
		}
	}
	cout << endl;
	cout << "Your classes:" << endl;

	for (int i = 0; i < studentClassCount; i++)
	{

		cout << classes[i] << "   ";
	}
	cout << endl << endl;
}

void Program2()
{
}

void Program3()
{
}

int main()
{
	bool done = false;

	while (!done)
	{
		int choice;
		cout << "0. QUIT" << endl;
		cout << "1. Program 1" << endl;
		cout << "2. Program 2" << endl;
		cout << "3. Program 3" << endl;
		cout << endl << ">> ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case 0: done = true; break;
		case 1: Program1(); break;
		case 2: Program2(); break;
		case 3: Program3(); break;
		}
	}

	return 0;
}
