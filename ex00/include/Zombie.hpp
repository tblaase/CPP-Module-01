/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:33:08 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/16 16:52:20 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// includes
#include <string>
#include <iostream>

// classes
class Zombie
{
	private:
		std::string	_name;
	public:
	// Constructors
		Zombie(std::string s);
	// Deconstructors
		~Zombie();
	// Public Methods
		void	announce(void)const;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);
