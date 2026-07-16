#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string str) : ClapTrap(str, 100, 50, 20) 
{
	std::cout << "\nScavTrap default constructor called\n";
	std::cout << "Name: " << name << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap("New ScavTrap")
{
	std::cout << "\nScavTrap copy constructor called\n";
	*this = other;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\nScavTrap destructor called\n";
	std::cout << "Name: " << name << '\n';
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs_instance)
{
	std::cout << "\nScavTrap copy assignment operator called\n";
	std::cout << "Old name: " << name << '\n';
	if (this != &rhs_instance)
	{
		this->name = rhs_instance.name;
		this->hit_points = rhs_instance.hit_points;
		this->energy_points = rhs_instance.energy_points;
		this->attack_damage = rhs_instance.attack_damage;
	}
	std::cout << "New name: " << name << '\n';
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->hit_points)
		std::cout << '\n'<< name << " is now in Gate keeper mode\n";
	else
		std::cout << '\n' << name << " cannot enter Gate keeper mode"
			<< "because it's out of hit points\n";
	return ;
}