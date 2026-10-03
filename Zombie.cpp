#include "Zombie.hpp"


Zombie::Zombie(std::string name): _name(name)
{

}

Zombie::~Zombie()
{

}

void	Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie(std::string name)
{

}

void	randomChump(std::string name)
{

}
