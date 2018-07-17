#include "File.hpp"
#include <iostream>
#include <string>
#include <fstream>


FileWriter::FileWriter(const string& filename)
{
	m_output.open(filename);
}
FileWriter::~FileWriter()
{
	m_output.close();

}
void FileWriter::Write(const string& lineOfText)
{
	m_output << lineOfText << endl;
}
