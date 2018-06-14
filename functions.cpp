#include  "functions.hpp"
#include <string>
#include <iostream>
using namespace std;

int Choice(int min, int max)
{
	int decision;
	cin >> decision;

	while (decision < min || decision > max)
	{
		//User entered invalid number
		cout << "Invalid value , try again: ";
		cin >> decision;
	}
	return decision;
}
string nameOfPet()
{
	string petName;
	cout << "What do you want your pet name to be: ";
	cin >> petName;
	cout << endl << endl;
	return petName;
}
void displayCat()
{
	cout << "  ^   ^ " << endl;
	cout << "=( O.O )=" << endl << endl;
}
void displayBunny()
{
	cout << "  __    __" << endl
		<< " / ||..||/ " << endl
		<< "  ( oo )  " << endl
		<< "   (__)" << endl << endl;
}
void displayFish()
{
	cout << "  _ " << endl <<
		"><_>" << endl << endl;
}
void displayPetMenu()
{
	cout << "Which pet do you want?" << endl << endl;
	cout << "1. Cat" << endl << endl;
	displayCat();
	cout << endl << endl << "2. Bunny" << endl << endl;
	displayBunny();
	cout << endl << endl << "3. Fish" << endl << endl;
	displayFish();
	cout << endl << endl << "Choice: ";
}
int petChoice(int min, int max)
{
	int petDecision;
	cin >> petDecision;

	while (petDecision < min || petDecision > max)
	{
		//User entered invalid number
		cout << "Invalid value , try again: ";
		cin >> petDecision;
	}
	return petDecision;
}
