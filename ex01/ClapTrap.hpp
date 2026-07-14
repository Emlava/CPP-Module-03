#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		std::string			name;
		unsigned int		hit_points;
		unsigned int		energy_points;
		unsigned int		attack_damage;
	
	public:
		// --- Canonical requirements ---
		// Default constructor
		ClapTrap(std::string = "without a name");
		// Copy constructor
		ClapTrap(const ClapTrap& other);
		// Destructor
		~ClapTrap(void);
		// Copy assignment operator
		ClapTrap&	operator=(const ClapTrap& rhs_instance);
		// ------------------------------

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
