#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	hp = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap " << name << ": ""Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "FragTrap " << name << ": ""Copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& _name) : ClapTrap(_name)
{
	hp = 100;
	energy = 100;
	damage = 30;
	std::cout << "FragTrap " << name << ": ""Constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& copy)
{
	if (this != &copy)
	{
		ClapTrap::operator=(copy);
		std::cout <<"FragTrap " << name << ": ""Assignation operator called" << std::endl;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
	if (hp > 0)
		std::cout << "FragTrap " << name << " is asking for a high five! ✋" << std::endl;
	else
		std::cout << "FragTrap " << name << " is too weak to ask for a high five... 😢" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << ": ""Destructor called" << std::endl;
}

