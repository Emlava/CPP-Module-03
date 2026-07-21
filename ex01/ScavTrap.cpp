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
		this->name = "New " + rhs_instance.name;
		this->hit_points = rhs_instance.hit_points;
		this->energy_points = rhs_instance.energy_points;
		this->attack_damage = rhs_instance.attack_damage;
	}
	std::cout << "New name: " << name << '\n';
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (!this->hit_points)
	{
		std::cout << '\n' << this->name << " cannot attack because it has no hit points left\n";
		return ;
	}
	if (!this->energy_points)
	{
		std::cout << '\n' << this->name << " has no energy points left to attack\n";
		return ;
	}
	this->energy_points--;
	std::cout << '\n' << this->name << " has the audacity to attack " << target << ", causing "
		<< this->attack_damage << " point(s) of damage!\n";
	std::cout << "Current energy points: " << this->energy_points << '\n';
	return ;
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