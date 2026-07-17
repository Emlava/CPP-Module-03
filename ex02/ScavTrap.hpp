#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		// --- Canonical requirements ---
		// Default constructor
		ScavTrap(std::string = "ScavTrap without a name");
		// Copy constructor
		ScavTrap(const ScavTrap& other);
		// Destructor
		~ScavTrap(void);
		// Copy assignment operator
		ScavTrap&	operator=(const ScavTrap& rhs_instance);
		// ------------------------------

		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif