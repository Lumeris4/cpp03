/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:32:59 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/20 20:44:10 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
	bool _guard_mod;
	
	public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &src);
	ScavTrap(const ScavTrap &copy);
	void guardGate();
	void attack(const std::string &target);
};