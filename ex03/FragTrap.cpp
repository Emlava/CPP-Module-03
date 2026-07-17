#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str, 100, 100, 30)
{
	std::cout << "\nFragTrap default constructor called\n";
	std::cout << "Name: " << name << '\n';
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap("New FragTrap")
{

	std::cout << "\nFragTrap copy constructor called\n";
	*this = other;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\nFragTrap destructor called\n";
	std::cout << "Name: " << name << '\n';
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs_instance)
{
	std::cout << "\nFragTrap copy assignment operator called\n";
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

void	FragTrap::highFivesGuys(void)
{
	if (this->hit_points)
		std::cout << '\n' << name << " requests high-fives from the guys successfully\n";
	else
		std::cout << '\n' << name << " cannot request high-fives"
		<< " because it's out of hit points\n";
	return ;
}