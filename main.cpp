#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void Program1()
{
	const int MAX_CLASSES = 6;
	string classes[MAX_CLASSES];
	int studentClassCount = 0;
	string userInput;

	cout << "CLASS LIST" << endl << endl;

	for (int i = 0; i < MAX_CLASSES; i++)
	{
		cout << "Enter class " << i << " or type STOP: \t";
		cin >> userInput;

		if (userInput == "STOP")
		{
			break;
			cout << endl;
		}
		else
		{
			classes[i] = userInput;
			studentClassCount++;
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
	const int totalItems = 5;
	float price[totalItems];
	string name[totalItems];
	
	ofstream outputFile("items.txt"); // this also opens output.txt

	cout << "STOREFRONT" << endl << endl;

	for (int i = 0; i < totalItems; i++)
	{
		cout << "ITEM " << (i + 1) << endl;
		cout << "     Enter the item's name:  ";
		cin.ignore();
		getline(cin, name[i]);
		cout << "     Enter the item's price: ";
		cin >> price[i];
		cout << endl;
	}
	if (outputFile.fail())
	{
		cout << "Could not find output file!" << endl;
		 
	}
	else 
	{
		outputFile << "ITEMS FOR SALE" << endl << endl;
		for (int i = 0; i < totalItems; i++)
		{
			outputFile << i+1 << ". " << name[i] << " $" << price[i] << endl;
		}
	}
	outputFile.close();
}

void Program3()
{
	string todo[7][24];
	int userChoice;
	int todoItemCount = 0;
	int dayOfWeek;
	int timeOfDay;

	cout << "TO DO LIST" << endl << endl;

	bool done = false;

	while (!done)
	{
		int dayOfWeek;
		int timeOfDay;

		cout << "1. Add new to-do item" << endl << "2. Save list" << endl << "3. Quit" << endl << endl;
		cout << ">> ";
		cin >> userChoice; 
		if (userChoice == 1)
		{
			cout << endl << "NEW ITEM" << endl << endl;
			cout << "0. Sunday \t 1. Monday \t 2. Tuesday \t 3. Wednesday" << endl
				<< "4. Thursday \t 5. Friday \t 6. Saturday" << endl << endl;
			cout << endl << "Which day of the week (0 to 6): \t";
			cin >> dayOfWeek;
			cout << endl << "What time of day? (0 to 23):\t\t";
			cin >> timeOfDay;
			
			cout << endl << "What is the to do item?\t\t\t";
			cin.ignore();
			getline(cin, todo[dayOfWeek][timeOfDay]);
			cout << endl << endl << "SAVED" << endl << endl;
		
		}
		else if (userChoice == 2)
		{
			ofstream outputFile("todolist.txt");
			outputFile << "TO DO LIST" << endl << endl;

			for (int day = 0; day < 7; day++)
			{
				if (day == 0)
				{
					outputFile << "Sunday" << endl;
				}
				else if (day == 1)
				{
					outputFile << "Monday" << endl;
				}
				else if (day == 2)
				{
					outputFile << "Tuesday" << endl;
				}
				else if (day == 3)
				{
					outputFile << "Wednesday" << endl;
				}
				else if (day == 4)
				{
					outputFile << "Thursday" << endl;
				}
				else if (day == 5)
				{
					outputFile << "Friday" << endl;
				}
				else if (day == 6)
				{
					outputFile << "Saturday" << endl;

				}
				for (int hour = 0; hour < 24; hour++)
				{
					if (todo[day][hour] != "")
					{
						outputFile << "    " << hour << ":00" << "   " << todo[day][hour] << endl;
					}
				}
				outputFile << endl;
			}
				outputFile.close();
		}
		else if (userChoice == 3)
		{
			done = true;
		}
		else
		{
			cout << "Invalid choice, please try again: ";
			cin >> userChoice;
		}
	}
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
