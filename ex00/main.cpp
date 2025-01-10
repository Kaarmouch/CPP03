#include "ClapTrap.hpp"

int main()
{

	ClapTrap clap1("ClapMaster");
	ClapTrap clap2("TrapDestroyer");

	// Testing attack function
	clap1.attack("TrapDestroyer");
	clap2.attack("ClapMaster");

	// Testing takeDamage function
	clap2.takeDamage(3);
	clap1.takeDamage(5);

	// Testing beRepaired function
	clap1.beRepaired(4);
	clap2.beRepaired(7);

	// Testing when ClapTrap has no energy or hit points left
	clap1.takeDamage(10);  // This should reduce ClapTrap's hit points to 0
	clap1.attack("TrapDestroyer"); // Should not be able to attack
	clap1.beRepaired(5);   // Should not be able to repair
	return 0;
}
