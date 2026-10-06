#include <iostream>
#include <string>

int	main(void)
{
	std::string brain;
	std::string *stringPTR;
	std::string &stringREF = brain;

	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;

	std::cout << brain << std::endl;
	std::cout << (*stringPTR) << std::endl;
	std::cout << stringREF << std::endl;

	std::cout << (&brain) << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << (&stringREF) << std::endl;
	return (0);
}
