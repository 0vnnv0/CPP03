/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:43:48 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/03 16:07:56 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << YELLOW << "ScavTrap: " << RESET << "Default constructor for " << _name << " called!" << std::endl;	
}
ScavTrap::~ScavTrap()
{
	std::cout << YELLOW << "ScavTrap: " << RESET << "Destructor has been called!" << std::endl;
}
void ScavTrap::attack(const std::string& target)
{
	if (_ep <= 0 || _hp <= 0)
		return ;
	_ep--;
	std::cout << YELLOW << "ScavTrap: " << BLUE << _name <<" attacks " << target << ", causing " << RED << _ad << BLUE << " points of damage!" << RESET << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap is now in Gate keeper mode!" << std::endl;
}