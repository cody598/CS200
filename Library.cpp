#include "Library.hpp"
#include "Book.hpp"

Library :: Library()
{
	m_bookList = nullptr;
	m_arraySize = 0;
	m_bookCount = 0;
	AllocateMemory(10);
}
Library :: ~Library()
{
	DeallocateMemory();
}
void Library:: DeallocateMemory()
{
	if (m_bookList != nullptr)
	{
		delete[] m_bookList;
		m_bookList = nullptr;
		m_arraySize = 0;
		m_bookCount = 0;
	}
}
void Library::AllocateMemory(int size)
{
	if (m_bookList != nullptr)
	{
		DeallocateMemory();
	}
	m_bookList = new Book[size];
	m_arraySize = size;
	
}
void Library :: ResizeArray()
{
	Book* biggerArray = new Book[(m_arraySize) + 10];
	int newSize = m_arraySize + 10;

	for (int i = 0; i < m_arraySize; i++)
	{
		biggerArray[i] = m_bookList[i];
	}
	delete[] m_bookList;
	m_bookList = biggerArray;
	m_arraySize = newSize;
}
int Library :: GetArraySize()
{
	return m_arraySize;
}
int Library :: GetBookCount()
{
	return m_bookCount;
}
bool Library :: IsArrayFull()
{
	if (m_arraySize == m_bookCount)
	{
		return true;
	}
	else if (m_bookCount < m_arraySize)
	{
		return false;
	}
	return false;
}
void Library :: DisplayBooksWithIndex()
{
	for (int i = 0; i < m_bookCount; i++)
	{
		cout << left << i << "  \t " << m_bookList[i].GetTitle() << "\t\t\t   " << m_bookList[i].GetAuthor() << endl;
	}
}
void Library :: Run()
{
	LoadData();
	MainMenu();
}
void Library :: MainMenu()
{
	bool done = false;
	while (!done)
	{
		int choice;

		cout << "----------------------------" << endl;
		cout << "| LIBRARY MAIN MENU |" << endl;
		cout << "---------------------" << endl;
		cout << "1.   Add New Book" << endl << "2.   Update Book" << endl << "3.   View Stats" << endl << "4.   View all books" << endl << "5.   Save and quit" << endl;
		cout << "---------------------" << endl;
		cout << "What do you want to do? ";
		cin >> choice;

		cout << endl;

		if (choice == 1)
		{
			NewBook();
		}
		else if (choice == 2)
		{
			UpdateBook();
		}
		else if (choice == 3)
		{
			ViewStats();
		}
		else if (choice == 4)
		{
			ViewAllBooks();
		}
		else if (choice == 5)
		{
			done = true;
		}
	}
	SaveData();
}
void Library :: NewBook()
{
	if (IsArrayFull() == true)
	{
		ResizeArray();
	}
	string bookTitle;
	string bookAuthor;
	int rs, ps;
	
	cout << "---------------------------------" << endl;
	cout << "| ADD NEW BOOK |" << endl;
	cout << "----------------" << endl << endl;

	cin.ignore();
	cout << "Enter the book title:\t";
	getline(cin, bookTitle);
	cout << "Enter the book author:\t";
	getline(cin, bookAuthor);

	cout << endl << "What is the reading status?" << endl << "0. Not started \t 1. Reading \t 2. Finished" << endl << ">> "; 
	cin >> rs;

	while (rs != 0 && rs != 1 && rs != 2)
	{
		cout << "Error, enter new reading status: ";
		cin >> rs;
	}

	cout << endl << "What is the purchase status?" << endl << "0. Owned \t 1. On wishlist" << endl << ">> ";
	cin >> ps;

	while (ps != 0 && ps != 1)
	{
		cout << "Error, enter new purchase status: ";
		cin >> ps;
	}

	cout << endl << endl;

	m_bookList[m_bookCount].SetBookInfo(bookTitle, bookAuthor);
	m_bookList[m_bookCount].SetReadingStatus(ReadingStatus(rs));
	m_bookList[m_bookCount].SetPurchaseStatus(PurchaseStatus(ps));

	m_bookCount++;
	cout << "Added Book" << endl;
	cout << "----------------" << endl << endl;
}
void Library :: UpdateBook()
{
	int index;
	int choice;

	cout << "---------------------------------" << endl;
	cout << "| UPDATE BOOK |" << endl;
	cout << "----------------" << endl << endl;
	cout << "Book \t Title \t\t\t\t   Author" << endl;

	DisplayBooksWithIndex();
	cout << endl << "Update which book?  ";
	cin >> index;
	cout << endl << "1. Update title" << endl << "2. Update author" << endl << "3. Update reading status" << endl << "4. Update purchase status" << endl << endl;
	cout << "Which do you want to update?  ";
	cin >> choice;
	if (choice == 1)
	{
		cin.ignore();
		string newTitle;
		string oldAuthor = m_bookList[index].GetAuthor();
		cout << "---------------" << endl;
		cout << "What is the new title?\t";
		getline(cin, newTitle);
		
		m_bookList[index].SetBookInfo(newTitle, oldAuthor);
		cout << "The book has been updated" << endl;
	}
	else if (choice == 2)
	{
		cin.ignore();
		string oldTitle = m_bookList[index].GetTitle();
		string newAuthor;
		cout << "---------------" << endl;
		cout << "What is the new title?\t"; 
		getline(cin, newAuthor);

		m_bookList[index].SetBookInfo(oldTitle, newAuthor);
		cout << "The book has been updated" << endl;
	}
	else if (choice == 3)
	{
		int newRs;
		
		cout << "---------------" << endl;
		cout << "Reading statuses:" << endl;
		cout << "0. Not started \t 1. Reading \t 2. Finished" << endl << endl;
		cout << "What is the new reading status?\t";
		cin >> newRs;
		cout << endl << "---------------" << endl;
		

		while (newRs != 0 && newRs != 1 && newRs != 2)
		{
			cout << "Error, enter new reading status: ";
			cin >> newRs;
		}

		m_bookList[index].SetReadingStatus(ReadingStatus(newRs));
		cout << "The book has been updated" << endl;
	}
	else if (choice == 4)
	{
		int newPs;
		cout << "---------------" << endl;
		cout << "Purchase statuses:" << endl;
		cout << "0. Owned \t\t 1. On wishlist" << endl << endl;
		cout << "What is the new purchase status?\t";
		cin >> newPs;
		cout << endl << "---------------" << endl;
		

		while (newPs != 0 && newPs != 1)
		{
			cout << "Error, enter new purchase status: ";
			cin >> newPs;
		}

		m_bookList[index].SetPurchaseStatus(PurchaseStatus(newPs));
		cout << "The book has been updated" << endl;
	}
}
void Library :: ViewAllBooks()
{
	cout << "---------------------------------" << endl;
	cout << "| VIEW ALL BOOKS |" << endl;
	cout << "------------------" << endl << endl;
	for (int i = 0; i < m_bookCount; i++)
	{
		m_bookList[i].DisplayBook();
	}
}
void Library :: ViewStats()
{
	int booksOwned = 0;
	int booksWishList = 0;
	int booksFinished = 0; 
	int booksReading = 0; 
	int booksNotRead = 0;

	for (int i = 0; i <= m_bookCount - 1; i++)
	{
		if (m_bookList[i].GetPurchaseStatus() == 0)
		{
			booksOwned++;
		}
		else if (m_bookList[i].GetPurchaseStatus() == 1)
		{
			booksWishList++;
		}
	}
	for (int j = 0; j <= m_bookCount - 1; j++)
	{
		if (m_bookList[j].GetReadingStatus() == 0)
		{
			booksNotRead++;
		}
		else if (m_bookList[j].GetReadingStatus() == 1)
		{
			booksReading++;
		}
		else if (m_bookList[j].GetReadingStatus() == 2)
		{
			booksFinished++;
		}
	}
	cout << "---------------------------------" << endl;
	cout << "| VIEW BOOK STATS |" << endl;
	cout << "-------------------" << endl << endl;

	cout << "Total books: " << m_bookCount << endl << endl;

	cout << "Books owned: " << booksOwned << endl;
	cout << "Books on wishlist: " << booksWishList << endl << endl;

	cout << "Books finished: " << booksFinished << endl;
	cout << "Books reading: " << booksReading << endl;
	cout << "Books not started: " << booksNotRead << endl << endl;
}
void Library::SaveData()
{
	ofstream output;
	output.open("books.txt");

	for (int i = 0; i < m_bookCount; i++)
	{
		output << "BOOK" << i << endl;
		output << m_bookList[i].GetTitle() << endl;
		output << m_bookList[i].GetAuthor() << endl;
		output << m_bookList[i].GetPurchaseStatus() << endl;
		output << m_bookList[i].GetReadingStatus() << endl;
	}
	output.close();
}
void Library :: LoadData()
{
	ifstream input("books.txt");

	string header, title, author;
	int rs, ps;

	while (input >> header)
	{
		input.ignore();
		getline(input, title);
		getline(input, author);
		input >> rs;
		input >> ps;

		if (IsArrayFull())
		{
			ResizeArray();
		}

		m_bookList[m_bookCount].SetBookInfo(title, author);
		m_bookList[m_bookCount].SetPurchaseStatus(PurchaseStatus(ps));
		m_bookList[m_bookCount].SetReadingStatus(ReadingStatus(rs));

		m_bookCount++;
	}
	input.close();
}
