/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 15:56:48 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 16:22:24 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() 
{
	std::cout << PURPLE << "FragTrap: " << RESET << "Default Constructor called!" << std::endl;

}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_ep = 100;
	_ad = 30;
	
	std::cout << PURPLE << "FragTrap: " << RESET << name << " has been created!" << std::endl;
}
FragTrap::FragTrap(const FragTrap &other): ClapTrap(other)
{
	std::cout << "FragTrap: Copy Constructor called!" << std::endl;
	*this = other;
}

FragTrap &FragTrap::operator=(const FragTrap &other) 
{
	if (this != &other)
	{
		_name = other._name;
		_ep = other._ep;
		_hp = other._hp;
		_ad = other._ad;
	}
	std::cout << "FragTrap: Copy Assignment operator called!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << PURPLE << "FragTrap: " << RESET << "Destructor called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << PURPLE << "High Five anyone?" << std::endl;
}
