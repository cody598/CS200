#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

// Display two options: Add new to-do item, or quit.

void DisplayMainMenu()
{
	cout << "1. New to_do item" << endl;
	cout << "2. Quit" << endl;
}

// Get the user's input, validate whether it is between min and max,
// if the value is invalid, ask the user to input it again
// (using a while loop).
// Once the user's input is valid, return that value.
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

// Get a line of text from the user using cin, and return this info.
string GetToDoItem()
{

	string todo;
	cout << "Enter to-do item: ";
	cin >> todo;
	return todo;
}

int main()
{
	int counter = 1;
	bool done = false;

	ofstream outputFile("todo.txt"); // this also opens output.txt

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
			outputFile << counter << ". " << list << endl;
			//getline(outputFile, list); why?????
			cout << endl << "------------------" << endl;
			counter++;
		}
		else if (choice == 2)
		{
			cout << "Goodbye.";
			done = true;
		}
		outputFile.close();
	}
	
	// 1. Create an ofstream object and open a text file.
	// 2. Create an integer called counter, initialize it to 1.
	// 3. Create a boolean called done, initialize it to false.

	// 4. While done is not true...
	//      4a. Display the main menu
	//      4b. Get the user's input via the GetChoice function,
	//          store it in a variable.
	//      4c. If choice is 1...
	//          * Get a to do item with the GetToDoItem function.
	//          * Write the counter # and the to do item to the
	//            output file.
	//          * Incremenet the counter.
	//      4d. If choice is 2...
	//          * Set done to true.

	// 5. Once the while loop is over, close the output file.
	return 0;
}
