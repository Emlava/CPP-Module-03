#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(std::string str = "FragTrap without a name");
		FragTrap(const FragTrap& other);
		~FragTrap(void);
		virtual FragTrap&	operator=(const FragTrap& rhs_instance);

		void	highFivesGuys(void);
};

#endif