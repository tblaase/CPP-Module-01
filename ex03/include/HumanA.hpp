/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:29:55 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/17 11:58:09 by tblaase          ###   ########.fr       */
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
		Weapon _weapon;
		std::string _name;
	public:
	// Constructors
		HumanA();
		HumanA(std::string name, Weapon weapon);

	// Deconstructors
		~HumanA();

	// Public Methods
		void	attack(void)const;
	// Getter
		const std::string	getWeapon(void)const;
		const std::string	getName(void)const;
	// Setter
		void	setWeapon(Weapon weapon);
		void	setName(std::string name);
};