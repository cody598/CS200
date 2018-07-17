#include "File.hpp"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string filename;
	cout << "File to write to: \t";
	cin >> filename;
	FileWriter writer(filename + ".txt");
	cin.ignore();
	
	cout << endl << endl << "Enter a line of text or STOP to quit." << endl << endl;
	string text;

	bool done = false;
	while (!done)
	{
		cout << ">> ";
		getline(cin, text);
		writer.Write(text);
		if (text == "STOP")
		{
			done = true;
		}
	}
	cin.ignore();
	cin.get();
	return 0;
}
