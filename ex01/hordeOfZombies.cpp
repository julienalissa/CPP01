#include "Zombie.hpp"

static void	setAllNames(Zombie* zombieHorde, std::string name, int n)
{
	int	i;

	i = 0;

	while (i < n)
	{
		zombieHorde[i].setName(name);
		i++;
	}
}

Zombie* zombieHorde(int n, std::string name)
{
	Zombie *zombieHorde;

	if (n <= 0)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		return (NULL);
	}
	zombieHorde = new Zombie[n];
	setAllNames(zombieHorde, name, n);

	return (zombieHorde);
}
