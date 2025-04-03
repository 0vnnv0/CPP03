/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:33:21 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/03 15:31:13 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Carl");
	ClapTrap b("Bob");
	a.attack("Bob");
	b.takeDamage(8);
	b.beRepaired(9);
	b.attack("Carl");
	a.takeDamage(10);
	return (0);	
}