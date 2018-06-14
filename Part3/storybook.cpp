#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string story;
	ifstream input;
	input.open("story.txt");

	if (input.fail())
	{
		cout << "Could not find input file!" << endl;
		return 1; // exit
	}

	while (getline(input, story))
	{
		cout << story << endl;
	}


	// Don't quit automatically
	cin.ignore();
	cin.get();
	input.close();
	return 0;
}
