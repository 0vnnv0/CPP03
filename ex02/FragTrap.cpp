/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:56:48 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/03 16:13:25 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	
	std::cout << "FragTrap Default Constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "High Five anyone?" << std::endl;
}
