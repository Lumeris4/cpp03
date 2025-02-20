/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:19:52 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/20 13:17:02 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap Elouann("elouann");
	ClapTrap Leo("Leo");
	
	Elouann.attack("Leo");
	Leo.takeDamage(0);
	Leo.beRepaired(10);
	for (int i = 0; i < 10; i++)
		Elouann.attack("Leo");
	return 0;
}
