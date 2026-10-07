#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::debug()
{
	std::cout << "debug" << std::endl;
}

void	Harl::info()
{
	std::cout << "info" << std::endl;
}

void	Harl::warning()
{
	std::cout << "warning" << std::endl;
}

void	Harl::error()
{
	std::cout << "error" << std::endl;
}

void	Harl::complain(std::string lvl)
{
	int	i;

	std::string	lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl *coplain[4])() =
	{
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	i = 0;
	while (i < 4)
	{
		if (lvl[i] == lvls)
		{
			(this->*methodes[i])();
			return;
		}
		i++;
	}
}
