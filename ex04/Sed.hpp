#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream>

class Sed
{
public:
	Sed(const std::string &fileName, const std::string &s1, const std::string &s2);
	~Sed();
	int	openFiles();
	void	closeFiles();
	void	remplaceInFile();
private:
	std::string	_inFileName;
	std::string	_s1;
	std::string	_s2;
	std::string	_outFileName;
	std::ifstream _inputFile;
	std::ofstream _outFile;
};



#endif
