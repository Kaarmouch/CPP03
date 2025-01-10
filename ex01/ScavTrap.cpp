#include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap()
{
	hp = 100;
	energy = 50;
	damage = 20;
	gate = false;
	std::cout << "ScavTrap " << name << ": Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)
{
	gate = copy.gate;
	std::cout << "ScavTrap " << name << ": ""Copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& _name): ClapTrap(_name)
{
	hp = 100;
	energy = 50;
	damage = 20;
	gate = false;
	std::cout << "ScavTrap " << name << ": ""Constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& copy)
{
	ClapTrap::operator=(copy);
	gate = copy.gate;
	std::cout <<"ScavTrap " << name << ": ""Assignation operator called" << std::endl;

	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (energy)
	{
		energy--;
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	if (gate)
	{
		std::cout << "ScavTrap " << name << " is already in Gate keeper mode" << std::endl;
		return ;
	}
	gate = true;
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << ": ""Destructor called" << std::endl;
}
