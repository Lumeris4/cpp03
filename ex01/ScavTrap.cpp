/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:33:01 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/20 15:57:46 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_damage = 20;
	this->_Energie_points = 50;
	this->_Hit_points = 100;
	this->_guard_mod = false;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " is now in Gate keeper mode.\n";
	this->_guard_mod = true;
}