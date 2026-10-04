#include "Zombie.hpp"

Zombie::Zombie(): _name("")
{

}

Zombie::~Zombie()
{
	std::cout << _name << " is destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name, int i)
{
	char c = i + '0';
	this->_name = name + c;

}

std::string	Zombie::getName(void)
{
	return (_name);
}
