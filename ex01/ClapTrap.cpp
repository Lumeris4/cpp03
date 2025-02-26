/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 10:53:31 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/26 09:44:36 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Hit_points(10), _Energie_points(10), _damage(0) {std::cout << "constructor default called"<< std::endl;}

ClapTrap::ClapTrap(std::string name): _Hit_points(10), _Energie_points(10), _damage(0)
{
	this->_name = name;
	std::cout << "constructor called for " << this->_name << std::endl;
}

ClapTrap::~ClapTrap() {std::cout << "Destructor called for " << this->_name << std::endl;};

ClapTrap::ClapTrap(const ClapTrap &other): _Hit_points(10), _Energie_points(10), _damage(0)
{
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
	this->_damage = other._damage;
	this->_Energie_points = other._Energie_points;
	this->_Hit_points = other._Hit_points;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_Energie_points == 0 || this->_Hit_points == 0)
	{
		std::cout << this->_name << " can't attack !\n";
		return ;
	}
	std::cout << "ClapTrap" << this->_name << " attacks " << target << ", causing "
		<< this->_damage << " points of damage !\n";
	this->_Energie_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_Hit_points <= 0)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	std::cout << this->_name << " takes " << amount << " damage !\n";
	this->_Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_Energie_points == 0 || this->_Hit_points == 0)
	{
		std::cout << this->_name << " can't repair !\n";
		return ;
	}
	std::cout << this->_name << " be repaired with " << amount << " points !\n";
	this->_Hit_points += amount;
	this->_Energie_points--;
}
