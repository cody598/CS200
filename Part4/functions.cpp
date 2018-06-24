#include "functions.hpp"
#include <iostream>
#include <string>
#include <iomanip>

void Display(string students[], int size)
{
	cout << endl << "---------------------------------------" << endl;
	cout << left << setw(20) << "STUDENT ID" << setw(20) << "STUDENT NAME" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << left << setw(20) << i << setw(20) << students[i] << endl;
	}

}
int getChoice(int min, int max)
{
	int choice;
	cout << ">> ";
	cin >> choice;
	while (choice < min || choice > max)
	{
		cout << "Invalid entry, try again." << endl;
		cout << ">> ";
		cin >> choice;
	}
	return choice;
}
