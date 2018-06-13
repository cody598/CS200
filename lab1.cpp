#include <iostream>     // Input-output stream library
using namespace std;    // Use the STandarD library

int main()
{
	
	float batches;
	cout << "How many batches? ";
	cin >> batches; 
	
	float tspBakingSoda = 1.0 * batches;
	float tspBakingPowder = .5 * batches;
	float cButter = 1.0 * batches;
	float cWhiteSugar = 1.5 * batches;
	float eggAmount = 1.0 * batches;

	cout << "tsp of baking soda: " << tspBakingSoda << endl;
	cout << "tsp of baking powder: " << tspBakingPowder << endl;
	cout << "cups of butter: " << cButter << endl;
	cout << "cups of white sugar: " << cWhiteSugar << endl;
	cout << "egg: " << eggAmount << endl;

	//Don't close automatically
	int a;
	cin >> a;

	// or do this:
	cin.ignore();
	cin.get();

	return 0;
}
