/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:32:59 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/26 12:51:06 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
	bool _guard_mod;
	
	public:
	ScavTrap();
	ScavTrap(std::string name);
	virtual ~ScavTrap();
	ScavTrap &operator=(const ScavTrap &src);
	ScavTrap(const ScavTrap &copy);
	void guardGate();
	void attack(const std::string &target);
};