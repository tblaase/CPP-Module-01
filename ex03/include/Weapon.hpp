/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:24 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 16:46:05 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes
class Weapon
{
	private:
		std::string	_type;

	public:
	// Constructor
		Weapon(const std::string &weapon);
	// Deconstructors
		~Weapon();
	// Getter
		std::string getType() const;
	// Setter
		void setType(const std::string &weapon);
	// Public Methods

};
