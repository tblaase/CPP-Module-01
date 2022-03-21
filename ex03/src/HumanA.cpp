/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:58 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 16:52:12 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// Constructor
HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
	std::cout << this->_name <<" joined the battlefield and grabbed a " << this->_weapon.getType() << " to fight." << std::endl;
}

// Deconstructor
HumanA::~HumanA(void)
{
    std::cout << this->_name << " died." << std::endl;
}

// Public Methods
void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << "." << std::endl;
}
