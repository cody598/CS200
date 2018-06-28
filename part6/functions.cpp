#include <iostream>
#include <string>
#include <cstdlib>      // for srand and rand
#include <ctime> // for time
#include "functions.hpp"
using namespace std;


void AssignManagers(string managerNames[MANAGER_COUNT], string * employeeManagers[EMPLOYEE_COUNT])
{
	for (int i = 0; i < EMPLOYEE_COUNT; i++)
	{
		int index = rand() % MANAGER_COUNT;
		employeeManagers[i] = &managerNames[index];
	}
}

void DisplayEmployees(string employeeNames[EMPLOYEE_COUNT], string * employeeManagers[EMPLOYEE_COUNT])
{
	for (int i = 0; i < EMPLOYEE_COUNT; i++)
	{
		cout << "Employee " << i << "\t" << employeeNames[i] << "   " << " Manager: " << *employeeManagers[i] << endl;
	}
}
