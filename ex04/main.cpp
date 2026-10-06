#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Execute like this : " << argv[0] << " <arg1> <arg2> <arg3>" << std::endl;
		return (1);
	}
		std::cout << "top" << std::endl;


	return (0);
}
