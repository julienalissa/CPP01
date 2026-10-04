#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int		index;
	int		nbZombie;

	nbZombie = -1;
	if (nbZombie < 1)
	{
		std::cout << "You need to have at least 1 zombie" << std::endl;
		return (0);
	}
	index = 0;
	zombie = zombieHorde(nbZombie, "zombie");
	while (index < nbZombie)
	{
		std::cout << zombie[index].getName() << std::endl;
		index++;
	}
	delete[] zombie;

	return (0);
}
