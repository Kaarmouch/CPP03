#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool gate;
	public:
		ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap(const std::string&);
		virtual	~ScavTrap();
		ScavTrap& operator=(const ScavTrap&);
		void attack(const std::string&);
		void guardGate();
};
