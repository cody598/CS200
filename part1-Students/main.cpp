
#include <iostream>
#include <string>
#include "Student.hpp"
using namespace std;

int main()
{
	Student student1, student2, student3;
	student1.name = "Cody";
	student1.degree = "Engineering";
	student1.gpa = 3.98;
	student2.name = "John";
	student2.degree = "Biology";
	student2.gpa = 3.78;
	student3.name = "Alex";
	student3.degree = "Chemistry";
	student3.gpa = 3.01;

	cout << "STUDENTS" << endl << endl;
	cout << "Student name:\t" << student1.name << endl << "Degree:\t\t" << student1.degree
		<< endl << "GPA:\t\t" << student1.gpa << endl << endl;
	cout << "Student name:\t" << student2.name << endl << "Degree:\t\t" << student2.degree
		<< endl << "GPA:\t\t" << student2.gpa << endl << endl;
	cout << "Student name:\t" << student3.name << endl << "Degree:\t\t" << student3.degree
		<< endl << "GPA:\t\t" << student3.gpa << endl << endl;



	cin.ignore();
	cin.get();
	return 0;
}
