/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 15:05:01 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 16:21:22 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#define BLUE "\033[1;34m"
#define RESET "\033[0m"
  
#include <iostream>
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public: 
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap &operator=(const DiamondTrap &other);
		~DiamondTrap();
		using ScavTrap::attack;
		void whoAmI();
};

#endif