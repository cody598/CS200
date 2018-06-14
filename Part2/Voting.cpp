#include "functions.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{		
	int pizzaVotes = 0;
	int samosasVotes = 0;
	int tacosVotes = 0;
	int bibimbapVotes = 0;

	bool done = false;

	ofstream output("voting.txt"); // this also opens output.txt
	output << "POLL RESULTS" << endl << endl;

	cout << "Voting" << endl << endl << endl;
	cout << "------------------" << endl;

	while (!done)
	{
		DisplayMainMenu();
		int choice = GetChoice(1, 5);
		cout << endl;

		if (choice == 1)
		{
			cout << "\tVote successful." << endl << endl << endl << "------------------" << endl;
			pizzaVotes++;
		}
		else if (choice == 2)
		{
			cout << "\tVote successful." << endl << endl << endl << "------------------" << endl;
			samosasVotes++;
		}
		else if (choice == 3)
		{
			cout << "\tVote successful." << endl << endl << endl << "------------------" << endl;
			tacosVotes++;
		}
		else if (choice == 4)
		{
			cout << "\tVote successful." << endl << endl << endl << "------------------" << endl;
			bibimbapVotes++;
		}
		else if (choice == 5)
		{
			cout << "Goodbye.";
			done = true;
		}
	}
	output << "Pizza:    " << pizzaVotes << " votes" << endl
		<< "Samosas:  " << samosasVotes << " votes" << endl
		<< "Tacos:    " << tacosVotes << " votes" << endl
		<< "Bibimbap: " << bibimbapVotes << " votes" << endl;
	
	// Don't quit automatically
	cin.ignore();
	cin.get();
	output.close();
	return 0;
}
