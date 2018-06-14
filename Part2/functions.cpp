#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "functions.hpp"

void DisplayMainMenu()
{
	cout << "Vote for a food item:" << endl;
	cout << "1. Pizza" << endl;
	cout << "2. Samosas" << endl;
	cout << "3. Tacos" << endl;
	cout << "4. Bibimbap" << endl << endl;
	cout << "Or quit the program with:" << endl <<
		"5. Quit" << endl << endl;
	cout << "Choice: ";
}

int GetChoice(int min, int max)
{
	int choice;
	cin >> choice;

	while (choice < min || choice > max)
	{
		//User entered invalid number
		cout << "Invalid value , try again." << endl;
		cout << "Choice: ";
		cin >> choice;
	}
	return choice;
}
