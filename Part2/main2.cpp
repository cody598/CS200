#include <iostream>
using namespace std;

int main()
{
	bool bArr[4];
	int iArr[4];

	cout << "Bool size: " << sizeof(bool) << "\t\t Int size: " << sizeof(int) << endl;
	cout << "Bool array size: " << sizeof(bArr) 
		 << "\t Int array size: " << sizeof(iArr) << endl << endl;

	cout << "Bool array addresses:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "    Index " << i << ":\t" << &bArr[i] << endl;
	}

	cout << endl << "Int array addresses:" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "    Index " << i << ":\t" << &iArr[i] << endl;
	}

	cout << endl << "Bool array address: " << &bArr << endl;
	cout << "Int array address: " << &iArr << endl;

	cin.ignore();
	cin.get();
	return 0;
}
