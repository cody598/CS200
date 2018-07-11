#include <iostream>
#include <string>
#include "Location.hpp"
#include "AdventureGame.hpp"

using namespace std;

int main()
{
	Location m_locations[9];

	// Set up each location's title and description
	m_locations[0].SetInfo("Forest", "The forest is cool and dark.");
	m_locations[1].SetInfo("Eastern forest edge", "The forest expands to the west.");
	m_locations[2].SetInfo("Lake", "The lake has several plants growing around it.");
	m_locations[3].SetInfo("Southern forest edge", "The forest expands to the north.");
	m_locations[4].SetInfo("Western desert edge", "The desert is barren, but nearby grass is growing.");
	m_locations[5].SetInfo("East cave entrance", "The cave leads further in to the south.");
	m_locations[6].SetInfo("Northern desert edge", "Dry grass speckle the landscape here.");
	m_locations[7].SetInfo("South cave entrance", "The cave leads further in to the east.");
	m_locations[8].SetInfo("Cave internal", "The cave is dark and damp.");

	// Set location 0's EAST neighbor to location 1...
	m_locations[0].SetNeighbor("east", &m_locations[1]);
	m_locations[0].SetNeighbor("south", &m_locations[3]);

	m_locations[1].SetNeighbor("west", &m_locations[0]);
	m_locations[1].SetNeighbor("south", &m_locations[4]);
	m_locations[1].SetNeighbor("east", &m_locations[2]);

	m_locations[2].SetNeighbor("west", &m_locations[1]);
	m_locations[2].SetNeighbor("south", &m_locations[5]);

	m_locations[3].SetNeighbor("east", &m_locations[4]);
	m_locations[3].SetNeighbor("south", &m_locations[6]);
	m_locations[3].SetNeighbor("north", &m_locations[0]);

	m_locations[4].SetNeighbor("west", &m_locations[3]);
	m_locations[4].SetNeighbor("south", &m_locations[7]);
	m_locations[4].SetNeighbor("north", &m_locations[1]);
	m_locations[4].SetNeighbor("east", &m_locations[5]);

	m_locations[5].SetNeighbor("west", &m_locations[4]);
	m_locations[5].SetNeighbor("south", &m_locations[8]);
	m_locations[5].SetNeighbor("north", &m_locations[2]);

	m_locations[6].SetNeighbor("east", &m_locations[7]);
	m_locations[6].SetNeighbor("north", &m_locations[3]);

	m_locations[7].SetNeighbor("west", &m_locations[6]);
	m_locations[7].SetNeighbor("north", &m_locations[4]);
	m_locations[7].SetNeighbor("east", &m_locations[8]);

	m_locations[8].SetNeighbor("west", &m_locations[7]);
	m_locations[8].SetNeighbor("north", &m_locations[5]);

	for (int i = 0; i < 9; i++)
	{
		cout << "LOCATION " << i << ":" << endl;
		m_locations[i].Display();
		cout << endl << endl;
	}

	cin.ignore();
	cin.get();
	return 0;
}
