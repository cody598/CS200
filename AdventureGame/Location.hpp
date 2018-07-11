#ifndef _LOCATION_HPP
#define _LOCATION_HPP

#include <string>
using namespace std;

class Location
{
public:
	Location();
	void SetInfo(string name, string description);
	void Display();
	string GetName();
	void SetNeighbor(string direction, Location* ptrLocation);
	Location* GetNeighbor(string direction);

private:
	string m_name;
	string m_description;
	Location* m_ptrNorth;
	Location* m_ptrSouth;
	Location* m_ptrEast;
	Location* m_ptrWest;
};


#endif

