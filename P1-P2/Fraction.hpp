#ifndef _FRACTION_HPP
#define _FRACTION_HPP

struct Fraction
{
	public:
	void Setup(int n, int d);
	void Display();
	Fraction Add(Fraction* other);
	Fraction Subtract(Fraction* other);
	Fraction Multiply(Fraction* other);
	Fraction Divide(Fraction* other);
	

	private:
	
	int num;
	int denom;

};

int getChoice();

#endif
