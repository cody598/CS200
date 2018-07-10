#include "Fraction.hpp"
#include <iostream>
#include <string>
using namespace std;

// Set up the fraction:
// "n" is the new numerator and "d" is the new denominator.
void Fraction::Setup(int n, int d)
{
	this->num = n;
	this->denom = d;
}

// Display the fraction to the screen,
// with the numerator showing above a bar and the denominator.
void Fraction::Display()
{
	cout << this->num << "/" << this->denom;
}

Fraction Fraction::Add(Fraction* other)
{
	// Temporary variables
	int resultNum, resultDenom;

	if (this->denom == other->denom)
	{
		// Already have common denominator
		resultNum = this->num + other->num;
		resultDenom = this->denom;
	}
	else
	{
		// Get common denominator
		Fraction f1;
		f1.num = this->num * other->denom;
		f1.denom = this->denom * other->denom;

		Fraction f2;
		f2.num = other->num * this->denom;
		f2.denom = other->denom * this->denom;

		resultNum = f1.num + f2.num;
		resultDenom = f2.denom;
	}

	// Set up the result
	Fraction result;
	result.Setup(resultNum, resultDenom);
	return result;
}

Fraction Fraction::Subtract(Fraction* other)
{
	// Temporary variables
	int resultNum, resultDenom;

	if (this->denom == other->denom)
	{
		// Already have common denominator
		resultNum = this->num + other->num;
		resultDenom = this->denom;
	}
	else
	{
		// Get common denominator
		Fraction f1;
		f1.num = this->num * other->denom;
		f1.denom = this->denom * other->denom;

		Fraction f2;
		f2.num = other->num * this->denom;
		f2.denom = other->denom * this->denom;

		resultNum = f1.num - f2.num;
		resultDenom = f2.denom;
	}

	// Set up the result
	Fraction result;
	result.Setup(resultNum, resultDenom);
	return result;
}

Fraction Fraction::Multiply(Fraction* other)
{
	// Temporary variables
	int resultNum, resultDenom;

	// Do the math
	resultNum = this->num   * other->num;
	resultDenom = this->denom * other->denom;

	// Set up the result
	Fraction result;
	result.Setup(resultNum, resultDenom);
	return result;
}

Fraction Fraction::Divide(Fraction* other)
{
	// Temporary variables
	int resultNum, resultDenom;

	// Do the math
	resultNum = this->num   * other->denom;
	resultDenom = this->denom / other->num;

	// Set up the result
	Fraction result;
	result.Setup(resultNum, resultDenom);
	return result;
}
int getChoice()
{
	int choice; 
	cin >> choice;
	return choice;
}
