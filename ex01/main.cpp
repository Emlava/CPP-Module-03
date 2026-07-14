#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Scav;
	ScavTrap	Scav2("John");
	std::string	target = "a random guy";

	Scav.attack(target);
	Scav2.attack(target);
	Scav = Scav2;

	Scav.takeDamage(33);
	Scav.beRepaired(3);
	Scav.guardGate();

	return (0);
}