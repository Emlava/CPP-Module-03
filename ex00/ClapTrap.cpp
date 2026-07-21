#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str, unsigned int hp, unsigned int eg, unsigned int ad) :
	name(str), hit_points(hp), energy_points(eg), attack_damage(ad)
{
	std::cout << "\nClapTrap default constructor called\n";
	std::cout << "Name: " << name << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "\nClapTrap copy constructor called\n";
	*this = other;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "\nClapTrap destructor called\n";
	std::cout << "Name: " << name << '\n';
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& rhs_instance)
{
	std::cout << "\nClapTrap copy assignment operator called\n";
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

void	ClapTrap::attack(const std::string& target)
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
	std::cout << '\n' << this->name << " attacks " << target << ", causing "
		<< this->attack_damage << " point(s) of damage!\n";
	std::cout << "Current energy points: " << this->energy_points << '\n';
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hit_points)
	{
		std::cout << '\n' << this->name
			<< " cannot take any more damage, as it has no hit points left\n";
		return ;
	}
	if (amount > this->hit_points)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << '\n' << this->name << " has taken " << amount << " point(s) of damage\n";
	std::cout << "Current hit points: " << this->hit_points << '\n';
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hit_points)
	{
		std::cout << '\n'  << this->name << " cannot repair itself because it has no hit points left\n";
		return ;
	}
	if (!this->energy_points)
	{
		std::cout << '\n' << this->name << " has no energy points left to repair itself\n";
		return ;
	}
	this->hit_points += amount;
	this->energy_points--;
	std::cout << '\n' << this->name << " has recovered " << amount << " hit point(s)\n";
	std::cout << "Current hit points: " << this->hit_points << '\n';
	std::cout << "Current energy points: " << this->energy_points << '\n';
	return ;
}
