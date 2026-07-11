#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) : name(str), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\nDestructor called\n";
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs_instance)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs_instance)
	{
		this->name = rhs_instance.name;
		this->hit_points = rhs_instance.hit_points;
		this->energy_points = rhs_instance.energy_points;
		this->attack_damage = rhs_instance.attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (!this->hit_points)
	{
		std::cout << "\nClapTrap " << this->name << " cannot attack beacuse it has no hit points left\n";
		return ;
	}
	if (!this->energy_points)
	{
		std::cout << "\nClapTrap " << this->name << " has no energy points left to attack\n";
		return ;
	}
	this->energy_points--;
	std::cout << "\nClapTrap " << this->name << " attacks " << target << ", causing "
		<< this->attack_damage << " point(s) of damage!\n";
	std::cout << "Current energy points: " << this->energy_points << '\n';
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hit_points)
	{
		std::cout << "\nClapTrap " << this->name
			<< " cannot take any more damage, as it has no hit points left\n";
		return ;
	}
	this->hit_points -= amount;
	std::cout << "\nClapTrap " << this->name << " has taken " << amount << " point(s) of damage\n";
	std::cout << "Current hit points: " << this->hit_points << '\n';
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hit_points)
	{
		std::cout << "\nClapTrap "  << this->name << " cannot repair itself beacuse it has no hit points left\n";
		return ;
	}
	if (!this->energy_points)
	{
		std::cout << "\nClapTrap " << this->name << " has no energy points left to repair itself\n";
		return ;
	}
	this->hit_points += amount;
	this->energy_points--;
	std::cout << "\nClapTrap " << this->name << " has recovered " << amount << " hit point(s)\n";
	std::cout << "Current hit points: " << this->hit_points << '\n';
	std::cout << "Current energy points: " << this->energy_points << '\n';
	return ;
}
