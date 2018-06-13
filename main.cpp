#include <iostream>
#include <string>
using namespace std;

int Choice(int min, int max)
{
	int decision;
	cin >> decision;

	while (decision < min || decision > max)
	{
		//User entered invalid number
		cout << "Invalid value , try again: " ;
		cin >> decision;
	}
	return decision;
}
int main()

{
	//Feature 1
	int percentHunger = 0;
	int percentHappiness = 100;
	int percentHealth = 100;
	string petName;

	
	cout << "What do you want your pet name to be: ";
	cin >> petName;
	cout << endl << endl;

	bool quit = false;
	while (!quit)
	{
		cout << "  ^   ^ " << endl;
		cout << "=( O.O )=" << endl;
		cout << endl;
		cout << "Name: \t\t" << petName << endl <<
			"Hunger: \t" << percentHunger << "%" << endl <<
			"Happiness: \t" << percentHappiness << "%" << endl <<
			"Health: \t" << percentHealth << "%" << endl << endl;

		cout << "1. Feed \t 2. Play \t 3. Heal \t  4. Quit" << endl << endl;
		cout << "Enter your selection:   ";
		int userChoice = Choice(1, 4);
		cout << endl << endl;

		if (userChoice == 1)
		{
			percentHunger = percentHunger - 10;
			cout << "\t Hunger goes down by 10%" << endl << endl;
		}
		else if (userChoice == 2)
		{
			percentHappiness = percentHappiness + 10;
			cout << "\t Happiness goes up by 10%" << endl << endl;
		}
		else if (userChoice == 3)
		{
			percentHealth = percentHealth + 10;
			cout << "\t Health goes up by 10%" << endl << endl;
		}
		else if (userChoice == 4)
		{
			quit = true;
		}
		else
		{
			int choice = Choice(1, 4);
			cout << endl << endl << endl << endl;
		}
		percentHunger = percentHunger + 5;
		percentHappiness = percentHappiness - 5;
		percentHealth = percentHealth - 5;
		cout << "\t Hunger goes up by 5%" << endl;
		cout << "\t Happiness goes down by 5%" << endl;
		cout << "\t Health goes down by 5%" << endl << endl << endl << endl;

		//check for percenthunger
		if (percentHunger >= 100)
		{
			percentHunger = 100;
			cout << "  ^   ^ " << endl;
			cout << "=( O.O )=" << endl;
			cout << endl;
			cout << "Name: \t\t" << petName << endl <<
				"Hunger: \t" << percentHunger << "%" << endl <<
				"Happiness: \t" << percentHappiness << "%" << endl <<
				"Health: \t" << percentHealth << "%" << endl << endl << endl;

			cout << "Your pet has been taken away from you!" << endl;
			cout << "Game Over";
			quit = true;
			
		}
		else if (percentHunger < 0)
		{
			percentHunger = 0;
		//check for percenthappiness
		}
		if (percentHappiness > 100)
		{
			percentHappiness = 100;
		}
		else if (percentHappiness < 0)
		{
			percentHappiness = 0;
		}
		//check for percenthealth
		if (percentHealth > 100)
		{
			percentHealth = 100;
		}
		else if (percentHealth < 0)
		{
			percentHealth = 0;
		}
	
	}

	cin.ignore();
	cin.get();

	return 0;
}
