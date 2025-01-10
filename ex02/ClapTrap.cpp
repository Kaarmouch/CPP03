#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap" << name << " Constructeur" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap" << name << " Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): name(other.name), hp(other.hp), energy(other.energy), damage(other.damage)
{
	std::cout << "ClapTrap" << "Constr cpy called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap" << "Surcharge ops called" << std::endl;
	name = other.name;
	hp = other.hp;
	energy = other.energy;
	damage = other.damage;

	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy && hp)
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
	}
	else 
	{
		std::cout << "ClapTrap " << name << " has no energy nor hp left to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
		if (hp >= amount)
	{
		hp -= amount;
		std::cout << "ClapTrap " << name << " has been attacked and lost " << amount << " hp" << std::endl;
	}
	else
	{
		hp = 0;
		std::cout << "ClapTrap " << name << " has been atacked and has died of its wounds" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy == 0)
		std::cout << "ClapTrap " << name << " doesn't have enough energy to repair itself !" << std::endl;
	else if (hp == 0)
		std::cout << "ClapTrap " << name << " doesn't have enough hp to repair itself !" << std::endl;
	else if (hp >= 10)
		std::cout << "ClapTrap " << name << " already has " << hp << " hp !" << std::endl;
		else
	{
		if ((hp + amount) > 10)
			amount = 10 - hp;
		energy--;
		hp += amount;
		std::cout << "ClapTep " << name << " healded ! and now have " << hp << " hp" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << ": ""Destructor called" << std::endl << std::endl;
}
