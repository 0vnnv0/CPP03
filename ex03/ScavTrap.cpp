/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:43:48 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 16:08:50 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{	
	std::cout << YELLOW << "Scav Trap: " << RESET << "Default Constructor called!" << std::endl;	
}

ScavTrap::ScavTrap (std::string name) : ClapTrap(name)
{
	name = _name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
	std::cout << YELLOW << "ScavTrap: " << RESET << name << " has been constructed!" << std::endl;	
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << YELLOW << "ScavTrap: " << RESET << "Copy Constructor has been called!" << std::endl;
	*this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		_ep = other._ep;
		_hp = other._hp;
		_ad = other._ad;
	}
	std::cout << YELLOW << "ScavTrap: " << RESET << "Copy assignment operator called!" << std::endl;
	return (*this);
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
	std::cout << YELLOW << "ScavTrap: " << RESET << _name <<" attacks " << target << ", causing " << RED << _ad << RESET << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrap is now in Gate keeper mode!" << RESET << std::endl;
}