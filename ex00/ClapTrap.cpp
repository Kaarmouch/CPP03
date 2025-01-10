#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hp(10), energy(10), damage(0)
{
	std::cout << name << " Constructeur" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName), hp(10), energy(10), damage(0)
{
	std::cout << name << " Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other): name(other.name), hp(other.hp), energy(other.energy), damage(other.damage)
{
	std::cout << "Constr cpy called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Surcharge ops called" << std::endl;
	name = other.name;
	hp = other.hp;
	energy = other.energy;
	damage = other.damage;

	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy)
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClpTrp" << name << "feels exhaust he can't strike" << std::endl;
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
	else if (hp <= 0)
		std::cout << "ClapTrap " << name << " it's just dead !" << std::endl;
	else if (hp >= 10)
		std::cout << "ClapTrap " << name << " already has " << hp << " hp !" << std::endl;
	else
	{
		if (hp + amount > 10)
			amount = 10 - hp;
		energy--;
		hp += amount;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "D E S T R U C T O R R R" << std::endl;
}
