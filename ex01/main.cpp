#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int		index;
	int		nbZombie;

	nbZombie = 3;
	index = 0;
	zombie = zombieHorde(nbZombie, "zombie");
	if (!zombie)
		return (1);
	while (index < nbZombie)
	{
		zombie[index].announce();
		index++;
	}
	delete[] zombie;

	return (0);
}
