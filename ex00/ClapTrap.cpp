/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:39:51 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/03 15:30:40 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "Default Constructor for " << name << " has been called!" << std::endl;	
}

ClapTrap::ClapTrap(const ClapTrap &other) 
{
	std::cout << "Copy Constructor has been called!" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) 
{
	if (this != &other)
	{
		_name = other._name;
		_hp = other._hp;
		_ep = other._ep;
		_ad = other._ad;
	}
	std::cout << "Copy assignment operator called!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called!" << std::endl;
}

void ClapTrap::attack(const std::string& target) 
{
	if (_ep <= 0 || _hp <= 0)
		return ;
	_ep--;
	std::cout << BLUE << _name <<" attacks " << target << ", causing " << RED << _ad << BLUE << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) 
{
	if (_hp <= 0 || _ep <= 0)
	{
		std::cout << REDB << _name << " is already out of Hit points or energy points and can't take more damage!" << RESET << std::endl;
		return ;
	}
	if (amount >= _hp)
	{
		_hp = 0;
		std::cout << REDB << _name << " takes " << amount << " points of damage and is now out of Hit points and died!" << RESET << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << BLUE << _name << " lost " << RED << amount << BLUE << " points of damage! Remaining Hit points: " << GREEN << _hp << RESET << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) 
{
	if (_ep <= 0 || _hp <= 0)
	{
		std::cout << REDB << _name << " cannot repair itself due to lack of energy or Hit points!" << RESET << std::endl;
		return ;
	}
	_ep--;
	_hp += amount;
	std::cout << BLUE << _name << " regained " << GREEN << amount << BLUE << " Hit points! Remaining Hit points: " << GREEN << _hp << RESET << std::endl;
}
