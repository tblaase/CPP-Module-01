/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:07 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 16:45:47 by tblaase          ###   ########.fr       */
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
		std::string _name;
		Weapon *_weapon;
		bool _is_armed;
	public:
	// Constructor
		HumanB(std::string name);
	// Deconstructor
		~HumanB(void);
	// Getter

	// Setter
		void setWeapon(Weapon &weapon);
	// Public Methods
		void attack(void);
};