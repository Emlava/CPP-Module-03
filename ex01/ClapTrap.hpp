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
		ClapTrap(std::string = "ClapTrap without a name",
			unsigned int hp = 10, unsigned int eg = 10, unsigned int ad = 0);
		// Copy constructor
		ClapTrap(const ClapTrap& other);
		// Destructor
		~ClapTrap(void);
		// Copy assignment operator
		ClapTrap&	operator=(const ClapTrap& rhs_instance);
		// ------------------------------

		virtual void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
