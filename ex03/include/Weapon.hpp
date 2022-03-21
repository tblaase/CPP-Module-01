/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 10:30:24 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/17 10:53:11 by tblaase          ###   ########.fr       */
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
	// Constructors
		Weapon();
		Weapon(std::string new_type);

	// Deconstructors
		~Weapon();

	// Public Methods

	// Getter
		const std::string	&getType(void)const;

	// Setter
		void	setType(std::string new_type);
};
