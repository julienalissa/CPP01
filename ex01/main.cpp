#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;
	int		index;

	index = 0;
	zombie = zombieHorde(5, "zombie");
	while (index < 5)
	{
		std::cout << zombie[index].getName();
		index++;
	}

	return (0);
}
