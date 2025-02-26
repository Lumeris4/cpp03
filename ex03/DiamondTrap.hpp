/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 10:09:19 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/26 12:59:26 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
	std::string _name;

	public:
	DiamondTrap();
	DiamondTrap(std::string name);
	virtual ~DiamondTrap();
	DiamondTrap &operator=(const DiamondTrap &other);
	DiamondTrap(const DiamondTrap &other);
	void whoAmI();
	void attack(const std::string &target);
};