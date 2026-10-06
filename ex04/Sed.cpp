#include "Sed.hpp"
#include <fstream>
#include <string>
#include <iostream>


Sed::Sed(const std::string &fileName, const std::string &s1, const std::string &s2): _inFileName(fileName), _s1(s1), _s2(s2), _outFileName(fileName + ".replace")
{

}

Sed::~Sed()
{
	if (this->_inputFile.is_open())
		this->_inputFile.close();
	if (this->_outFile.is_open())
		this->_outFile.close();
}

int	Sed::openFiles()
{
	_inputFile.open(this->_inFileName.c_str());
	if (!this->_inputFile.is_open())
	{
		std::cerr << "Can't open the input file" << std::endl;
		return (1);
	}



	this->_outFile.open(this->_outFileName.c_str());
	if (!this->_outFile.is_open())
	{
		std::cerr << "Can't open the output file" << std::endl;
		this->_inputFile.close();
		return (1);
	}


	return (0);
}

void	Sed::closeFiles()
{
	if (this->_inputFile.is_open())
		this->_inputFile.close();
	std::cout << "input close" << std::endl;
	if (this->_outFile.is_open())
		this->_outFile.close();
	std::cout << "output close" << std::endl;
}

void	Sed::remplaceInFile()
{
	std::string	line;
	std::size_t	pos;
	std::size_t	
	while (std::getline(this->_inputFile, line))
	{

	}
}
