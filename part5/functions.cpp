#include "functions.hpp"
#include <iostream>
#include <string>
#include <fstream>

void displayCities()
{
	cout << "Choose a starting point:" << endl
		<< "1. Kansas City" << endl
		<< "2. Seattle" << endl;
}
int cityChoice()
{
	int city;
	cin >> city;
	return city;
}
