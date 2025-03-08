#include "ScavTrap.hpp"


ScavTrap::ScavTrap(): ClapTrap("Default")
{
	hp = 100;
	energy = 50;
	damage = 20;
	gate = false;
	std::cout << "ScavTrap : Constructor called" << std::endl;
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
	if (hp <= 0)
	{
		std::cout << "ScavTrap "<< name << " is dead and cannot attak" << std::endl;
		return;
	}
	if (energy)
	{
		energy--;
		std::cout << "ScavTrap " << name << " attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << name << " feels exhaust he can't strike" << std::endl;
}

void ScavTrap::guardGate()
{
	if (hp <= 0)
	{
		std::cout << "No gate when u dead" << std::endl;
		return ;
	}
	gate = !gate;
	std::cout << "ScavTrap " << name << (gate ? " is now in Gate Keeper mode" : " has exited Gate Keeper mode") << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << ": ""Destructor called" << std::endl;
}
