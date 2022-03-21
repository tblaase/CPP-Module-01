/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:41 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 16:29:57 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


// // Constructor

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}

// // Deconstructor
Weapon::~Weapon()
{
	std::cout << this->getType() << " dropped to the floor and broke." << std::endl;
}

// Getter
std::string Weapon::getType() const
{
	return (_type);
}

// Setter
void Weapon::setType(const std::string &weapon)
{
	_type = weapon;
}
