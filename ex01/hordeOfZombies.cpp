#include "Zombie.hpp"

void	setAllNames(Zombie* zombieHorde, std::string name, int n)
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

	zombieHorde = new Zombie[n];
	setAllNames(zombieHorde, name, n);

	return (zombieHorde);
}
