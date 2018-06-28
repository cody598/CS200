#include <iostream>
#include <fstream>
#include <string>
#include "functions.hpp"
using namespace std;

int main()
{
	
	displayCities();
	int city = cityChoice();

	string cityName;
	ifstream inputFile;

	if (city == 1)
	{
		inputFile.open("from_kc.txt");
		if (inputFile.fail())
		{
			cout << "Could not find input file!" << endl;
			return 1; // exit
		}
		cityName = "Kansas City";
		cout << endl << "DISTANCE FROM KANSAS CITY TO..." << endl;
	}
	else if (city == 2)
	{
		inputFile.open("from_seattle.txt");
		if (inputFile.fail())
		{
			cout << "Could not find input file!" << endl;
			return 1; // exit
		}
		cityName = "Seattle";
		cout << endl << "DISTANCE FROM SEATTLE TO..." << endl;
	}

	int locationCount = 0;
	string * locations;
	int * distances;

	inputFile >> locationCount;
	locations = new string[locationCount];
	distances = new int[locationCount];
	
	for (int i = 0; i < locationCount; i++)
	{	
		inputFile >> locations[i] >> distances[i];
		cout << "* " << distances[i] << " miles - Distance from " << cityName << " to " << locations[i] << endl;
	}

	delete[] locations;
	delete[] distances;

	inputFile.close();

	cin.ignore();
	cin.get();
	return 0;
}
