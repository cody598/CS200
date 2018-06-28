#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;

int main()
{
	string ears[3] = { "   ^ ^   ",   "  n   n ",     "  *   *  " };
	string heads[3] = { " ( o_o ) ",   " ( x_x )" ,    " ( >_< ) " };
	string bodies[3] = { "/(     )\\",  "\\(     )/",   "o(     )o" };
	string feet[3] = { "  d   b   ",  "  @   @ ",     "  () () " };

	string * ptrEars;
	string * ptrHead;
	string * ptrBody;
	string * ptrFeet;


	char choice;
	bool done = false;
	do
	{

		cout << "Enter ears (0 - 2): ";
		int earsChoice = earC();
		ptrEars = &ears[earsChoice];

		cout << "Enter head (0 - 2): ";
		int headChoice = headC();
		ptrHead = &heads[headChoice];

		cout << "Enter body (0 - 2): ";
		int bodyChoice = bodyC();
		ptrBody = &bodies[bodyChoice];

		cout << "Enter feet (0 - 2): ";
		int feetChoice = feetC();
		ptrFeet = &feet[feetChoice];

		cout << endl << endl << ears[earsChoice] << endl;
		cout << heads[headChoice] << endl;
		cout << bodies[bodyChoice] << endl;
		cout << feet[feetChoice] << endl;

		cout << endl << "Again? (y/n): ";
		cin >> choice;
		if (choice == 'n')
		{
			done = true;
		}
	} while (choice == 'y');
		
	cin.ignore();
	cin.get();
	return 0;
}
