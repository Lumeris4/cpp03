/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:03:52 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/21 11:20:18 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap Elouann("Elouann");
	DiamondTrap Leo("Leo");
	
	Elouann.whoAmI();
	Leo.whoAmI();
	Elouann.attack("Leo");
	Leo.takeDamage(0);
	Leo.beRepaired(10);
	Leo.highFiveGuys();
	for (int i = 0; i < 3; i++)
	{
		Elouann.attack("Leo");
		Leo.takeDamage(30);
		Leo.attack("Elouann");
		Elouann.takeDamage(30);
	}
	Leo.attack("Elouann");
	Elouann.takeDamage(30);
	return 0;
}