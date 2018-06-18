#include <iostream>
#include <string>
using namespace std;

void Program1()
{
}

void Program2()
{
}

void Program3()
{
}

int main()
{
    bool done = false;

    while ( !done )
    {
        int choice;
        cout << "0. QUIT" << endl;
        cout << "1. Program 1" << endl;
        cout << "2. Program 2" << endl;
        cout << "3. Program 3" << endl;
        cout << endl << ">> ";
        cin >> choice;

        switch( choice )
        {
            case 0: done = true; break;
            case 1: Program1(); break;
            case 2: Program2(); break;
            case 3: Program3(); break;
        }
    }
    
    return 0;
}
