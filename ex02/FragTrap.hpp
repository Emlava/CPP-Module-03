#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string str = "FragTrap without a name");
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		FragTrap&	operator=(const FragTrap& rhs_instance);

		void	highFivesGuys(void);
};

#endif