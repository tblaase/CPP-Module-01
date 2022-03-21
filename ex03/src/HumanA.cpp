/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:58 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 14:40:15 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


// Constructors
HumanA::HumanA()
{
	Weapon default_club = Weapon();
	this->setName("defaultA");
	this->setWeapon(default_club);
}

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->setName(name);
	this->setWeapon(weapon);
}

// Deconstructor
HumanA::~HumanA()
{
}

// Public Methods
void	HumanA::attack(void)const
{
	std::cout <<
	this->getName() <<
	" attacks with their " <<
	this->getWeapon() <<
	std::endl;
}

// Getters
const std::string	HumanA::getName(void)const
{
	return (this->_name);
}

const std::string	HumanA::getWeapon(void)const
{
	return (this->_weapon.getType());
}

// Setters
void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}
