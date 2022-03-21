/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:31:05 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 16:52:39 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// Constructor
HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_is_armed = false;
	std::cout << this->_name <<" joined the battlefield." << std::endl;
}

// Deconstructor
HumanB::~HumanB(void)
{
    std::cout << this->_name << " died." << std::endl;
}

// Setter
void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	this->_is_armed = true;
	std::cout << this->_name << " grabbed a " << this->_weapon->getType() << " to fight with." << std::endl;
}

// Public Methods
void HumanB::attack(void)
{
    if (this->_is_armed)
    {
        std::cout << this->_name << " attacks with his " << this->_weapon->getType() << "." << std::endl;
    }
    else
    {
        std::cout << this->_name << " attacks with his fists." << std::endl;
    }
}