#include <iostream>
#include <string>
#include <cstdlib>      // for srand and rand
#include <ctime> // for time
#include "functions.hpp"
using namespace std;

int main()
{
	srand(time( NULL ));

	string managerNames[MANAGER_COUNT] = { "Artemis", "Luna" };

	string employeeNames[EMPLOYEE_COUNT] = { "Serena","Amy   ", "Raya  ", "Lite  ", "Mina  " };

	string * employeeManagers[EMPLOYEE_COUNT];

	AssignManagers(managerNames, employeeManagers);
	DisplayEmployees(employeeNames, employeeManagers);

	

	while (true);

	delete[] employeeNames;
	delete[] managerNames;
	delete[] employeeManagers;
	
	cin.ignore();
	cin.get();
	return 0;
}
