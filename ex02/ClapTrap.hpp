#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string	name;
		unsigned int	hp, energy, damage;
	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		~ClapTrap();
		void	attack(const std::string&);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
};
