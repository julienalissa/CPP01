# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void		announce(void);
	void		setName(std::string name, int i);
	std::string	getName(void);
private:
	std::string	_name;
};

Zombie*		zombieHorde(int N, std::string name);
std::string	setAllNames();
#endif
