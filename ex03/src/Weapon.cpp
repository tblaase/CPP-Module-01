/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:41 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/17 10:53:38 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


// Constructors

Weapon::Weapon()
{
	this->_type = "default club";
}

Weapon::Weapon(std::string new_type)
{
	this->_type = new_type;
}

// Deconstructor
Weapon::~Weapon()
{
	std::cout << "Weapon Deconstructor called" << std::endl;
}

// Public Methods

// Getter
const std::string	&Weapon::getType(void)const
{
	const std::string	&typeREF = this->_type;
	return (typeREF);
}

// Setter
void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
