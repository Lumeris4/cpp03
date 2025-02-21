/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:09:21 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/21 11:31:04 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap()
{
	this->_damage = FragTrap::_damage;
	this->_Energie_points = ScavTrap::_Energie_points;
	this->_Hit_points = FragTrap::_Hit_points;
	std::cout << "Default Diamond constructor called\n";
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_name = name + "_name";
	std::cout << this->_name <<"Name Diamond constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called for " << this->_name << "\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other): ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called \n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	this->_name = other._name;
	this->_damage = other._damage;
	this->_Energie_points = other._Energie_points;
	this->_Hit_points = other._Hit_points;
	std::cout << "Diamond operator called\n";
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << ClapTrap::_name << "and " << this->_name << "\n";
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}



