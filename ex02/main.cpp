/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:33:21 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/03 16:12:01 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap a("Carl");
	ScavTrap b("Bob");
	FragTrap c("Tom");
	a.attack("Bob");
	b.takeDamage(8);
	b.beRepaired(9);
	c.attack("Carl");
	b.attack("Carl");
	a.takeDamage(10);
	a.beRepaired(1);
	c.highFivesGuys();
	b.guardGate();
	return (0);	
}