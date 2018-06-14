#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

#include "functions.hpp"

int main()
{
	int counter = 1;
	bool done = false;
	ofstream output("todo.txt"); // this also opens output.txt

	cout << "TO DO LIST" << endl << endl;
	cout << "------------------" << endl;

	while (!done)
	{
		DisplayMainMenu();
		cout << ">> ";
		int choice = GetChoice(1, 2);
		cout << endl;
		if (choice == 1)
		{
			string list = GetToDoItem();
			output << counter << ". " << list << endl; 
			cout << endl << "------------------" << endl;
			counter++;
		}
		else if (choice == 2)
		{
			cout << "Goodbye.";
			done = true;
		}
		
	}
	
	cin.ignore();
	cin.get();
	output.close();
	return 0;
}
