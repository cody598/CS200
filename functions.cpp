#include "functions.hpp"
#include <iostream>
#include <string>

int earC()
{
	int earsChoice;
	cin >> earsChoice;

	while (earsChoice < 0 || earsChoice > 2)
	{
		//User entered invalid number
		cout << "Invalid value , try again." << endl;
		cout << ">>";
		cin >> earsChoice;
	}
	return earsChoice;
}
int headC()
{
	int headChoice;
	cin >> headChoice;

	while (headChoice < 0 || headChoice > 2)
	{
		//User entered invalid number
		cout << "Invalid value , try again." << endl;
		cout << ">>";
		cin >> headChoice;
	}
	return headChoice;
}
int bodyC()
{
	int bodyChoice;
	cin >> bodyChoice;

	while (bodyChoice < 0 || bodyChoice > 2)
	{
		//User entered invalid number
		cout << "Invalid value , try again." << endl;
		cout << ">>";
		cin >> bodyChoice;
	}
	return bodyChoice;
}
int feetC()
{
	int feetChoice;
	cin >> feetChoice;

	while (feetChoice < 0 || feetChoice > 2)
	{
		//User entered invalid number
		cout << "Invalid value , try again." << endl;
		cout << ">>";
		cin >> feetChoice;
	}
	return feetChoice;
}
