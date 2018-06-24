#include <iostream>

using namespace std;

int main()
{
	float priceA;
	float priceB;
	float priceC;

	float* ptrPrice;

	ptrPrice = &priceA;
	*ptrPrice = 9.99;
	cout << &priceA << endl;
	cout << "PriceA: \t$" << *ptrPrice << endl;
	ptrPrice = &priceB;
	*ptrPrice = 0.50;
	cout << "PriceB: \t$" << *ptrPrice << endl;
	ptrPrice = &priceC;
	*ptrPrice = 123.45;
	cout << "PriceC: \t$" << *ptrPrice << endl;

	cin.ignore();
	cin.get();
	return 0;
}
