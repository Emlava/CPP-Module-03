#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	name;

	public:
		DiamondTrap(std::string str1 = "ClapTrap without a name",
			std::string str2 = "DiamondTrap without a name");
		DiamondTrap(const DiamondTrap& other);
		~DiamondTrap(void);
		DiamondTrap&	operator=(const DiamondTrap& rhs_instance);

		void	whoAmI(void);
};

#endif