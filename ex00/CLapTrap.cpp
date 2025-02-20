/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CLapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:53:31 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/20 11:30:02 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): _Hit_points(10), _damage(0), _Energie_points(0)
{
	this->_name = name;
}

ClapTrap::~ClapTrap() {};

ClapTrap::ClapTrap(const ClapTrap &other): _Hit_points(10), _damage(0), _Energie_points(0)
{
	this->_name = other._name;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << this->_name << " attacks " << target << ", causing "
		<< this->_damage << " points of damage !";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " takes " << amount << " damage !";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " be repaired with " << amount << " points !";
}
