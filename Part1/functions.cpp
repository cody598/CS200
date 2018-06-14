#include  "functions.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void DisplayMainMenu()
{
	cout << "1. New to-do item" << endl;
	cout << "2. Quit" << endl;
}

int GetChoice(int min, int max)
{
	int choice;
	cin >> choice;

	while (choice < min || choice > max)
	{
		//User entered invalid number
		cout << "Invalid value , try again." << endl;
		cout << ">> ";
		cin >> choice;
	}
	return choice;
}
string GetToDoItem()
{
	string todo;
	cout << "Enter to-do item: ";
	cin.ignore();
	getline(cin, todo);
	return todo;
}
