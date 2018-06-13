#include <iostream>
#include <string>
using namespace std;

// Update this function
float CountChange(int quarterCount, int dimeCount, int nickelCount, int PennyCount)
{
	float CountChange = quarterCount *.25 + dimeCount * .10 + nickelCount * .05 + PennyCount * .01;
		return CountChange;
}

int main()
{
	cout << "COUNT CHANGE" << endl << endl;

	
	while (true)
	{
		int quarters, dimes, nickels, pennies;
		cout << "How many quarters? ";
		cin >> quarters;

		cout << "How many dimes? ";
		cin >> dimes;

		cout << "How many nickels? ";
		cin >> nickels;

		cout << "How many pennies? ";
		cin >> pennies;

		float total = CountChange(quarters, dimes, nickels, pennies);

		cout << endl << "You have: $" << total << endl;
	}

	// Don't quit automatically 
	cin.ignore();
	cin.get();
	return 0;
}
