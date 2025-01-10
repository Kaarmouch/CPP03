#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    // Create a ClapTrap object
    ClapTrap claptrap("Clappy");
    
    // Test ClapTrap's functionality
    claptrap.attack("Target A");
    claptrap.takeDamage(3);
    claptrap.beRepaired(5);
    claptrap.takeDamage(10); // Test taking more damage than health
    claptrap.attack("Target B"); // Test attack with low health
    
    std::cout << std::endl; // Add a separator for clarity

    // Create a ScavTrap object
    ScavTrap scavtrap("Scavvy");
    
    // Test ScavTrap's functionality
    scavtrap.attack("Target C");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(10);
    scavtrap.guardGate(); // Test the special ability
    scavtrap.guardGate(); // Test the ability when already in gate mode
    scavtrap.takeDamage(50); // Exceeding hit points
    scavtrap.attack("Target D"); // Attempt attack after damage
    scavtrap.beRepaired(20); // Attempt repair after damage
    
    std::cout << std::endl; // Add a separator for clarity

    // Copy ScavTrap
    ScavTrap scavtrapCopy(scavtrap);
    scavtrapCopy.attack("Target E");
    
    // Use the assignment operator
    ScavTrap anotherScavtrap("Scavenger");
    anotherScavtrap = scavtrap;
    anotherScavtrap.attack("Target F");

    std::cout << std::endl; // Add a separator for clarity

    // Create a FragTrap object
    FragTrap fragtrap("Fraggy");
    fragtrap.attack("Target G");
    fragtrap.takeDamage(20);
    fragtrap.beRepaired(15);
    fragtrap.highFivesGuys(); // Test the special ability

    std::cout << std::endl; // Add a separator for clarity

    // Additional tests for FragTrap
    fragtrap.takeDamage(100); // Test taking lethal damage
    fragtrap.highFivesGuys(); // Attempt special ability after lethal damage
    fragtrap.attack("Target H"); // Attempt attack after lethal damage
    fragtrap.beRepaired(30); // Attempt repair after lethal damage
    
    std::cout << std::endl; // Final separator for clarity

    // Use the assignment operator for FragTrap
    FragTrap fragtrapCopy;
    fragtrapCopy = fragtrap;
    fragtrapCopy.attack("Target I");

    return 0;
}
