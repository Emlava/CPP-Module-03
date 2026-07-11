#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	CT1("Violent Douche");
	std::string	target = "Jack";

	CT1.attack(target);
	CT1.takeDamage(5);
	CT1.beRepaired(1);
	return (0);
}
