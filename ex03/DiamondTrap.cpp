/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:04:09 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 16:17:48 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << BLUE << "DiamondTrap: " << RESET << "Default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	_hp = FragTrap::_hp;
	_ep = ScavTrap::_ep;
	_ad = FragTrap::_ad;
	std::cout << BLUE << "DiamondTrap: " << RESET << name << " has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
	std::cout << BLUE << "DiamondTrap: " << RESET "Copy constructor called!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
	}	
	std::cout << "Copy assignment operator called!" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap() 
{
	std::cout << BLUE << "DiamondTrap: " << RESET << "Default destructor called!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "---->DiamondTrap name is: " << _name << std::endl;
	std::cout << "---->ClapTrap name is: " << ClapTrap::_name << std::endl;
}