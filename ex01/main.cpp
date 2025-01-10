#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() 
{
    // Create a ClapTrap object
    ClapTrap claptrap("Clappy");
    
    // Test ClapTrap's functionality
    claptrap.attack("Target A");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    
    std::cout << std::endl; // Add a separator for clarity

    // Create a ScavTrap object
    ScavTrap scavtrap("Scavvy");
    
    // Test ScavTrap's functionality
    scavtrap.attack("Target B");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(10);
    scavtrap.guardGate(); // Test the special ability
    scavtrap.guardGate(); // Test the ability when already in gate mode

    std::cout << std::endl; // Add a separator for clarity

    // Copy ScavTrap
    ScavTrap scavtrapCopy(scavtrap);
    scavtrapCopy.attack("Target C");
    
    // Use the assignment operator
    ScavTrap anotherScavtrap;
    anotherScavtrap = scavtrap;
    anotherScavtrap.attack("Target D");

    return 0;
}

