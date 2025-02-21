/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:18:10 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/21 09:21:21 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{

	public:
	FragTrap();
	FragTrap(std::string name);
	virtual ~FragTrap();
	FragTrap &operator=(const FragTrap &src);
	FragTrap(const FragTrap &copy);
	void highFiveGuys();
};