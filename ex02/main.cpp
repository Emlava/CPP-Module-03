#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	Frag("Timmy");
	std::string	target = "a random innocent guy";

	Frag.attack(target);
	Frag.takeDamage(50);
	Frag.beRepaired(60);
	Frag.highFivesGuys();
	
	FragTrap	Frag2(Frag);

	Frag2.takeDamage(200);
	Frag2.beRepaired(200);
	Frag2.highFivesGuys();

	return (0);
}