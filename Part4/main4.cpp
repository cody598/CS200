#include <iostream>
#include <string>
#include <iomanip>
#include "functions.hpp"
using namespace std;

int main()
{
	const int STUDENT_COUNT = 3;
	string students[STUDENT_COUNT];
	string* ptrStudent;
	

	bool done = false;
	while (!done)
	{

		Display(students, STUDENT_COUNT);
		cout << endl << "1. UPDATE NAME \t 2. QUIT" << endl;
		int choice = getChoice(1, 2);
		if (choice == 1)
		{
			cout << "Student ID: ";
			int id;
			cin >> id;
			while (id < 0 || id >= STUDENT_COUNT)
			{
				cout << endl << "Invalid ID, try again" << endl << endl;
				cout << "Student ID: ";
				cin >> id;
			}
			ptrStudent = &students[id];
			cout << "New student name: ";
			cin >> *ptrStudent;
		}
		else if (choice == 2)
		{
			done = true;
		}
	}
  
	cin.ignore();
	cin.get();
	return 0;
}
