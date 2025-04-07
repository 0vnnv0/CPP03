/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:33:21 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 16:15:41 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Diamond("Carl");

	Diamond.attack("Klaus");
	Diamond.takeDamage(7);
	Diamond.beRepaired(3);
	Diamond.whoAmI();
	return (0);	
}