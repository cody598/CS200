#include <iostream>
#include <string>
#include "Location.hpp"
#include "AdventureGame.hpp"

using namespace std;

int main()
{
	AdventureGame game;
	game.Setup();
	game.Run();
	

	cin.ignore();
	cin.get();
	return 0;
}
