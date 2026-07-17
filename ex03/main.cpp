#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	Diamond("Jack", "Jackie");
	std::string	target = "a random tough guy";

	Diamond.attack(target);
	Diamond.takeDamage(50);
	Diamond.beRepaired(60);
	Diamond.whoAmI();
	
	DiamondTrap	Diamond2(Diamond);

	Diamond2.guardGate();
	Diamond2.highFivesGuys();
	Diamond2.takeDamage(200);
	Diamond2.beRepaired(200);

	return (0);
}