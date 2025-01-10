#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const FragTrap&);
		FragTrap(const std::string&);
		FragTrap& operator=(const FragTrap&);
		void highFivesGuys();
		virtual ~FragTrap();
};
