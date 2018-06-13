#include <iostream>   // Use cin and cout
#include <string>     // Use strings
using namespace std;


void Program1()
{
	string townName;

	cout << "Where are you from? ";
	cin >> townName;

	if (townName.size() > 6)
	{
		cout << "That's a long name!" << endl;
	}
	if (townName.size() <= 6)
	{

	}

	string firstName;
	cout << "What is your name? ";
	cin >> firstName;
	cout << "Hello, " << firstName << " from " << townName << "!" << endl;
}

void Program2()
{
	float totalPoints;
	float userPoints;
	float score;

	cout << "How many points does the assignment have? \t ";
	cin >> totalPoints;

	cout << "How many points did you get? \t \t \t ";
	cin >> userPoints;

	score = userPoints / totalPoints;
	cout << "Score: \t\t\t\t\t\t " << score << endl;
	
	if (score >= .7)
	{
		cout << "You passed!" << endl;
	}
	
	if (score < .7)
	{
		cout << "You failed!" << endl;
	}

}

void Program3()
{
	int chargeLevel;

	cout << "What is the amount of charge left on phone (not including percentage)? ";
	cin >> chargeLevel;

	if (chargeLevel >= 75 && chargeLevel <= 100 ) // Full Charge
	{
		cout << "[****]" << endl;
	}
	
	if (chargeLevel >= 50 && chargeLevel < 75) // 3/4 Charge
	{
		cout << "[***]" << endl;
	}
	
	if (chargeLevel >= 25 && chargeLevel < 50) // 1/2 Charge
	{
		cout << "[**]" << endl;
	}
	
	if (chargeLevel >= 5 && chargeLevel < 25) // 1/4 Charge
	{
		cout << "[*]" << endl;
	}
	
	if (chargeLevel >= 0 && chargeLevel < 5) // 0 Charge
	{
		cout << "[ ]" << endl;
	}
	// Instructions did not state whether or not to use = in the if statements. If = were not used then the options for battery level for 0, 25, 50, 75, and 100 could not be used.
}

void Program4()
{
	int genreChoice;

	cout << "What is your favortite type of book? " << endl;
	cout << "1. Scifi" << endl;
	cout << "2. Historical" << endl;
	cout << "3. Fantasy" << endl;
	cout << "4. DIY" << endl;

	
	cout << "Your Selection: ";
	cin >> genreChoice;
	if (genreChoice >= 1 && genreChoice <= 4)
	{

		cout << "Good Choice!" << endl;
	}
	else if (genreChoice < 1 || genreChoice > 4 || genreChoice < 0 )
	{
		cout << "Invalid Choice!" << endl;
	}
}

void Program5()
{
	float a, b;
	float result;

	cout << "Enter two numbers, seperated by a space: ";
	cin >>  a  >>  b ;

	cout << "Type of operation?" << endl;
	cout << "1. Add		2. Subtract		3. Multiply		4. Divide" << endl;
	
	int choice;
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:     // if Addition
	{
		float result = a + b;
		cout << a << "+" << b << " = " << result << endl;
		break;
	}
	case 2:     // If Subtraction
	{
		float result = a - b;
		cout << a << "-" << b << " = " << result << endl;
		break;
	}

	case 3:     // If Multiplication
	{
		float result = a * b;
		cout << a << "*" << b << " = " << result << endl;
		break;
	}

	case 4:     // If Division
	{
		float result = a / b;
		cout << a << "/" << b << " = " << result << endl;
		break;
	}

	default:    // else
	{
		cout << "Invalid Option" << endl;
	}
	
   }
	
}

int main()
{
	// Don't modify main
	while (true)
	{
		cout << "Run which program? (1-5): ";
		int choice;
		cin >> choice;

		cout << endl << endl;

		if (choice == 1) { Program1(); }
		else if (choice == 2) { Program2(); }
		else if (choice == 3) { Program3(); }
		else if (choice == 4) { Program4(); }
		else if (choice == 5) { Program5(); }

		cout << endl << "------------------------------------" << endl;
	}

	// Don't close automatically
	int a;
	cin >> a;

	return 0;
}
