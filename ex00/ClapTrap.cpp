#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("Default"), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap " << name << " Constructeur" << std::endl;
}

ClapTrap::ClapTrap(std::string newName) : name(newName), hp(10), energy(10), damage(0)
{
	std::cout << "ClapTrap " << name << " constructor" << std::endl;
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
	if (hp <= 0)
	{
		std::cout << "ClapTrap "<< name << " is dead and cannot attak" << std::endl;
		return;
	}
	if (energy)
	{
		energy--;
		std::cout << "ClapTrap " << name << " attacks " << target << " , causing " << damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " feels exhaust he can't strike" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp > amount)
	{
		hp -= amount;
		std::cout << "ClapTrap " << name << " has been attacked and lost " << amount << " hp" << std::endl;
	}
	else
	{
		hp = 0;
		std::cout << "ClapTrap " << name << "take's " << amount << "dammage : RIP" << std::endl;
	}

}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ClapTrap " << name << " is dead  cqnnot repqir itself!" << std::endl;
		return ;
	}
	else if (energy == 0)
	{
		std::cout << "ClapTrap " << name << " doesn't have enough energy to repair itself !" << std::endl;
		return ;
	}
	else if (hp >= 10)
	{
		std::cout << "ClapTrap " << name << " already has " << hp << " hp !" << std::endl;
		return ;
	}
	else
	{
		if (hp + amount > 10)
			amount = 10 - hp;
		energy--;
		hp += amount;
		std::cout << "ClapTrap" << name << " has healed and have now : " << hp << " hp!" << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << "D E S T R U C T O R R R" << std::endl;
}
