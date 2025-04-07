/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:33:48 by anschmit          #+#    #+#             */
/*   Updated: 2025/04/07 13:21:17 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#define BLUE "\033[1;34m"  
#define REDB "\033[41m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();
		void takeDamage(unsigned int amount);
		void attack(const std::string& target);
		void beRepaired(unsigned int amount);	
		
	protected:
		std::string _name;
		unsigned int _hp;
		unsigned int _ep;
		unsigned int _ad;
};

#endif