/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:22:00 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/26 13:25:36 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_damage = 30;
	this->_Energie_points = 100;
	this->_Hit_points = 100;
	std::cout << "FragTrap default constructor called \n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_damage = 30;
	this->_Energie_points = 100;
	this->_Hit_points = 100;
	this->_name = name;
	std::cout << "FragTrap name constructor called for " << this->_name << "\n";
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called \n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << this->_name << "\n";
}


FragTrap &FragTrap::operator=(const FragTrap &other)
{
	this->_name = other._name;
	this->_damage = other._damage;
	this->_Energie_points = other._Energie_points;
	this->_Hit_points = other._Hit_points;
	std::cout << "FragTrap operator called\n";
	return *this;
}

void FragTrap::highFiveGuys()
{
	std::cout << "Hey Guys, high five with me " << this->_name << "\n";
}

void FragTrap::attack(const std::string &target)
{
	if (this->_Energie_points <= 0)
	{
		std::cout << this->_name << " can't attack because he haven't energy!\n";
		return ;
	}
	if (this->_Hit_points <= 0)
	{
		std::cout << this->_name << " can't attack because he's dead !\n";
		return;
	}
	std::cout << this->_name << " as a Fragtrap bot attacks " << target << ", causing "
		<< this->_damage << " points of damage !\n";
	this->_Energie_points--;
}