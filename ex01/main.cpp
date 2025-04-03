/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:33:21 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/03 15:54:09 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap a("Carl");
	ScavTrap b("Bob");
	a.attack("Bob");
	b.takeDamage(8);
	b.beRepaired(9);
	b.attack("Carl");
	a.takeDamage(10);
	a.beRepaired(1);
	b.guardGate();
	return (0);	
}