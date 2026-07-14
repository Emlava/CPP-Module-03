#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str) 
{
	std::cout << "ScavTrap " << name << "'s default constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other.name)
{
	std::cout << "ScavTrap " << name << "'s copy constructor called\n";
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\nScavTrap " << name << "'s destructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs_instance)
{
	std::cout << "\nScavTrap " << name << "'s copy assignment operator called\n";
	if (this != &rhs_instance)
	{
		this->name = rhs_instance.name;
		this->hit_points = rhs_instance.hit_points;
		this->energy_points = rhs_instance.energy_points;
		this->attack_damage = rhs_instance.attack_damage;
	}
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->hit_points)
		std::cout << "\nScavTrap " << name << " is now in Gate keeper mode\n";
	else
		std::cout << "\nScavTrap " << name << " cannot enter Gate keeper mode"
			<< "because it's out of hit points\n";
	return ;
}