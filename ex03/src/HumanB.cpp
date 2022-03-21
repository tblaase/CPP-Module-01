/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:31:05 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 14:39:38 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


// Constructor
HumanB::HumanB() : _weapon(NULL)
{
	this->setName("defaultA");
}

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	this->setName(name);
}
// Deconstructor
HumanB::~HumanB()
{
	std::cout << "HumanB Deconstructor called" << std::endl;
	/*CODE*/
}

// Public Methods
void	HumanB::attack(void)const
{
	std::cout <<
	this->getName() <<
	" attacks with their ";
	if (HumanB::_weapon != NULL)
	{
		std::cout << this->getWeapon() <<
		std::endl;
	}
	else
	{
		std::cout << "Fists" <<
		std::endl;
	}
}

// Getters
const std::string	HumanB::getName(void)const
{
	return (this->_name);
}

const std::string	HumanB::getWeapon(void)const
{
	return (this->_weapon.getType());
}

// Setters
void	HumanB::setName(std::string name)
{
	this->_name = name;
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}

