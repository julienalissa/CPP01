#include "Sed.hpp"

int	main(int argc, char **argv)
{
	std::string	fileName;
	std::string	s1;
	std::string	s2;

	if (argc != 4)
	{
		std::cout << "Execute like this : " << argv[0] << " <arg1> <arg2> <arg3>" << std::endl;
		return (1);
	}
	fileName = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	Sed sed (fileName, s1, s2);

	if (sed.openFiles() == 1)
		return (1);
	sed.remplaceInFile();
	sed.closeFiles();
	return (0);
}
