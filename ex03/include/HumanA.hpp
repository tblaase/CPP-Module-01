/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:29:55 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 16:45:20 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
	// Constructor
		HumanA(std::string name, Weapon &weapon);
	// Deconstructor
		~HumanA(void);
	// Getter

	// Setter

	// Pubilc Methods
		void attack(void);
};
