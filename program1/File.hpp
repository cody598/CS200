#ifndef _FILE_HPP
#define _FILE_HPP

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class FileWriter
{
public:
	FileWriter(const string& filename);
	~FileWriter();

	void Write(const string& lineOfText);

private:
	ofstream m_output;
};

#endif
