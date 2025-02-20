/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:03:52 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/20 19:17:15 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Elouann("Elouann");
	ScavTrap Leo("Leo");
	
	Elouann.attack("Leo");
	Leo.takeDamage(0);
	Leo.beRepaired(10);
	Leo.guardGate();
	for (int i = 0; i < 10; i++)
		Elouann.attack("Leo");
	Leo.attack("Elouann");
	return 0;
}