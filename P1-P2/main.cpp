#include <iostream>
#include <string>
#include "Fraction.hpp"
using namespace std;

int main()
{
	Fraction frac1, frac2, fracResult;

	
	
	//frac1.Setup(2, 4); 
	//frac2.Setup(1, 4); 

	//cout << "Fraction 1: ";
	//frac1.Display();
	//cout << endl << endl;

	//cout << "Fraction 2: ";
	//frac2.Display();
	//cout << endl << endl;

	bool done = false;
	while (!done)
	{
		cout << "FRACTIONS PROGRAM" << endl << endl;
		int n, d;

		cout << "   Fraction 1" << endl << "      Enter numerator:\t   ";
		cin >> n;
		cout << "      Enter denominator:   ";
		cin >> d;
		cout << endl << endl;
		frac1.Setup(n, d);
		cout << "   Fraction 2" << endl << "      Enter numerator:\t   ";
		cin >> n;
		cout << "      Enter denominator:   ";
		cin >> d;
		cout << endl << endl;
		frac2.Setup(n, d);

		cout << "What to do with these fractions?" << endl << endl;
		cout << "1. Add \t 2. Subtract \t 3. Multiply \t 4. Divide \t 5. Quit" << endl << ">> ";
		int choice = getChoice();


		if (choice == 1)
		{
			frac1.Display();
			cout << " + ";
			frac2.Display();
			cout << " = ";

			fracResult = frac1.Add(&frac2);
			fracResult.Display();
		}
		else if (choice == 2)
		{
			frac1.Display();
			cout << " - ";
			frac2.Display();
			cout << " = ";

			fracResult = frac1.Subtract(&frac2); // passing in address to 2nd fraction
			fracResult.Display();
		}
		else if (choice == 3)
		{
			frac1.Display();
			cout << " * ";
			frac2.Display();
			cout << " = ";

			fracResult = frac1.Multiply(&frac2); // passing in address to 2nd fraction
			fracResult.Display();
		}
		else if (choice == 4)
		{
			frac1.Display();
			cout << " / ";
			frac2.Display();
			cout << " = ";
			fracResult = frac1.Divide(&frac2); // passing in address to 2nd fraction
			fracResult.Display();
		}
		else if (choice == 5)
		{
			done = true;
		}
		cout << endl << endl;
	}
	cin.ignore();
	cin.get();
	return 0;
}
