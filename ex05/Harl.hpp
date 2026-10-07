#ifndef Harl_HPP
# define Harl_HPP

#include <iostream>
#include <string>

Class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string lvl);
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
}

#endif
