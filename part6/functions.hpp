#ifndef _FUNCTIONS_HPP
#define _FUNCTIONS_HPP
#include <iostream>
using namespace std;

const int MANAGER_COUNT = 2;
const int EMPLOYEE_COUNT = 5;

void AssignManagers(string managerNames[MANAGER_COUNT], string * employeeManagers[EMPLOYEE_COUNT]);
void DisplayEmployees(string employeeNames[EMPLOYEE_COUNT], string * employeeManagers[EMPLOYEE_COUNT]);

#endif
