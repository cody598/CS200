#ifndef _LIBRARY_HPP
#define _LIBRARY_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Library.hpp"
#include "Book.hpp"
using namespace std;

class Library
{
public:
	Library();
	~Library();

	void DeallocateMemory();
	void AllocateMemory(int size);
	void ResizeArray();
	int GetArraySize();
	int GetBookCount();
	bool IsArrayFull();
	void DisplayBooksWithIndex();
	void Run();
	void MainMenu();
	void NewBook();
	void UpdateBook();
	void ViewAllBooks();
	void ViewStats();
	void SaveData();
	void LoadData();

private:
	Book* m_bookList;
	int m_arraySize;
	int m_bookCount;
};

#endif
