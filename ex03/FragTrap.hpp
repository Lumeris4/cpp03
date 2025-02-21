/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:18:10 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/21 11:28:05 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{

	public:
	FragTrap();
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap &operator=(const FragTrap &other);
	FragTrap(const FragTrap &other);
	void highFiveGuys();
	void attack(const std::string &target);
};