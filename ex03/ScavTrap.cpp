/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:33:01 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/26 11:07:23 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_damage = 20;
	this->_Energie_points = 50;
	this->_Hit_points = 100;
	this->_guard_mod = false;
	std::cout << "ScavTrap default constructor called \n";
}

ScavTrap::ScavTrap(std::string name)
{
	this->_damage = 20;
	this->_Energie_points = 50;
	this->_Hit_points = 100;
	this->_guard_mod = false;
	this->_name = name;
	std::cout << "ScavTrap name constructor called for " << this->_name << "\n";
}

ScavTrap::ScavTrap(const ScavTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called \n";
	this->_guard_mod = other._guard_mod;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << this->_name << "\n";
}

void ScavTrap::guardGate()
{
	if (this->_guard_mod == true)
	{
		std::cout << this->_name << " is already in Gate keeper mode.\n";
		return;
	}
	std::cout << this->_name << " is now in Gate keeper mode.\n";
	this->_guard_mod = true;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	this->_name = other._name;
	this->_damage = other._damage;
	this->_Energie_points = other._Energie_points;
	this->_Hit_points = other._Hit_points;
	this->_guard_mod = other._guard_mod;
	std::cout << "ScavTrap operator called\n";
	return *this;
}

void ScavTrap::attack(const std::string &target)
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
	std::cout << this->_name << " as a ScavTrap bot attacks " << target << ", causing "
		<< this->_damage << " points of damage !\n";
	this->_Energie_points--;
}