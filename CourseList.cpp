#include "CourseList.hpp"

#include <iostream>
using namespace std;

void CourseList::Setup()
{
	m_courseCount = 0;
	m_arraySize = 5;
	m_array = new string[5];
}

void CourseList::Cleanup()
{
	delete[] m_array;
}

void CourseList::Add( const string& item )
{
	if (IsFull() == true)
	{
		Resize();
	}
	int index = FindAvailableIndex();
	m_array[index] = item;
	m_courseCount++;
}

bool CourseList::IsFull()
{
	if (m_courseCount == m_arraySize)
	{
		return true;
	}
	else if (m_courseCount < m_arraySize)
	{
		return false;
	}
}

int CourseList::FindAvailableIndex()
{
	
	for (int i = 0; i < m_arraySize; i++)
	{
		if (m_array[i] == "")
		{
			if (IsFull() == false)
			{
				return i;
			}
		}
		if (m_array[i] != "")
	{
		return -1;
	}
	}
}

void CourseList::Remove( int index )
{
	if (IsValidIndex(index) == false)
	{
		cout << "Error; Index is not valid." << endl;
		return;
	}
	else if (m_array[index] == "")
	{
		cout << "There is no course." << endl;
		return;
	}
	else
	{
		m_array[index] = "";
		m_courseCount--;
		cout << "Course " << index << " was removed." << endl;
	}	
}

string CourseList::GetCourse( int index )
{
	if (IsValidIndex(index) == true)
	{
		return m_array[index];
	}
	else
	{
		return ""; 
	}	
}

void CourseList::Display()
{
	for (int i = 0; i < m_arraySize; i++)
	{
		cout << "\t" << i << ". " << m_array[i] << endl;
	}
}
bool CourseList::IsValidIndex(int index)
{
	if (index < m_arraySize && index >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
//	return false;
}

int CourseList::Size()
{
	return m_arraySize;
}

int CourseList::CourseCount()
{
	return m_courseCount;
}

void CourseList::Resize()
{
	int newSize = m_arraySize + 5;
	string * newArray = new string[newSize];
	for (int i = 0; i < m_arraySize; i++)
	{
		newArray[i] = m_array[i];
	}
	m_array = newArray;
	m_arraySize = newSize;

	delete[] newArray;
	
}
