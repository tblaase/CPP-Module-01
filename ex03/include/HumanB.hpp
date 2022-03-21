/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:07 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/17 12:39:33 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes

class HumanB
{
	private:
		Weapon _weapon;
		std::string _name;
	public:
	// Constructors
		HumanB();
		HumanB(std::string name);

	// Deconstructors
		~HumanB();

	// Public Methods
		void	attack(void)const;
	// Getter
		const std::string	getWeapon(void)const;
		const std::string	getName(void)const;
	// Setter
		void	setWeapon(Weapon weapon);
		void	setName(std::string name);
};