#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "Book.hpp"
#include "Library.hpp"

void Phase1_Test1()
{
	Book book1;
	book1.SetBookInfo("To Kill a Mockingbird" , "Harper Lee");
	book1.GetTitle();
	book1.GetAuthor();
	
	Book book2;
	book2.SetPurchaseStatus(OWNED);
	book2.GetPurchaseStatus();
	book2.GetPurchaseStatusString();

	Book book3;
	book3.SetReadingStatus(READING);
	book3.GetReadingStatus();
	book3.GetReadingStatusString();

	Book book4;
	book4.SetBookInfo("Of Mice and Men", "John Steinback");
	book4.SetReadingStatus(NOT_STARTED);
	book4.SetPurchaseStatus(WISHLIST);
	book4.DisplayBook();

}
void Phase2_Test1()
{
	Library libraryT2P1;
	libraryT2P1.AllocateMemory(10);
	libraryT2P1.GetArraySize();
}
void Phase2_Test2()
{
	Library libraryT2P2;
	libraryT2P2.AllocateMemory(15);
	libraryT2P2.ResizeArray();
	libraryT2P2.GetArraySize();
}
void Phase3_Test1()
{
	Library libraryT1P3;
	libraryT1P3.Run();
}
void Phase3_Test2()
{
	Library libraryT2P3;
	libraryT2P3.Run();
}
void Phase3_Test3()
{
	Library libraryT3P3;
	libraryT3P3.Run();
}
void Phase3_Test4()
{
	Library libraryT4P3;
	libraryT4P3.Run();
}
void Phase4_Test1()
{
	Library libraryT1P4;
	libraryT1P4.Run();
}
int main()
{
	//Phase1_Test1();
	//Phase2_Test1();
	//Phase2_Test2();
	//Phase3_Test1();
	//Phase3_Test2();
	//Phase3_Test3();
	//Phase3_Test4();

	Phase4_Test1();

	cin.get();
	cin.ignore();
	return 0;
}
