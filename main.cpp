#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("Graves");

	zombie->announce();
	randomChump("Chump");
	delete zombie;
	return (0);
}
