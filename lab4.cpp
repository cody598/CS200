#include <iostream>
#include <string>
using namespace std;

void Program1()
{
	int start = 0;
	int end = 20;
	cout << "COUNTING UP!" << endl;

	for (int i = start; i <= end; i++)
	{
		cout << i << " ";
	}
}

void Program2()
{
	int start = 1;
	int end = 128;
	cout << "COUNTING UP!" << endl;

	for (int i = start; i <= end; i *= 2)
	{
		cout << i << " ";
	}
}

void Program3()
{
	int sum = 0;
	cout << "SUM" << endl << endl;
	int input;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter number " << i << ": \t";
		cin >> input;
		sum = input + sum;

	}
	cout << endl << "SUM IS " << sum;

}
void Program4()
{
	// There is no program for this part of the lab
}

void Program5()
{
	// There is no program for this part of the lab
}

void Program6()
{
	// There is no program for this part of the lab
}

int main()
{
	// Don't modify main
	while (true)
	{
		cout << "Run which program? (1-6): ";
		int choice;
		cin >> choice;

		cout << endl << endl;

		if (choice == 1) { Program1(); }
		else if (choice == 2) { Program2(); }
		else if (choice == 3) { Program3(); }
		else if (choice == 4) { Program4(); }
		else if (choice == 5) { Program5(); }
		else if (choice == 6) { Program6(); }

		cout << endl << "------------------------------------" << endl;
	}

	return 0;
}
