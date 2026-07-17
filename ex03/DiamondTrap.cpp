#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str1, std::string str2) :
	ClapTrap(str1 + "_clap_name", 100, 50, 30), name(str2)
{
	std::cout << "\nDiamondTrap default constructor called\n";
	std::cout << "Name: " << name << '\n';
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) :
	ClapTrap("New DiamondTrap"), FragTrap(), ScavTrap()
{
	std::cout << "\nDiamondTrap copy constructor called\n";
	*this = other;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\nDiamondTrap destructor called\n";
	std::cout << "Name: " << name << '\n';
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs_instance)
{
	std::cout << "\nDiamondTrap copy assignment operator called\n";
	std::cout << "Old ClapTrap name: " << ClapTrap::name << '\n';
	if (this != &rhs_instance)
	{
		name = "New " + rhs_instance.name;
		this->ClapTrap::name = rhs_instance.name + "_clap_name";
		this->hit_points = rhs_instance.hit_points;
		this->energy_points = rhs_instance.energy_points;
		this->attack_damage = rhs_instance.attack_damage;
	}
	std::cout << "New ClapTrap name: " << ClapTrap::name << '\n';
	std::cout << "Local DiamondTrap name: " << name << '\n';
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "\nA DiamondTrap has asked who they are\n";
	std::cout << "DiamondTrap name: " << name << '\n';
	std::cout << "ClapTrap name: " << ClapTrap::name << '\n';
}