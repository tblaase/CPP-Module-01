/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:40:15 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/16 16:54:01 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string s) : _name(s)
{
	std::cout << "Hello i am about to launch an all out attack on your house. Sincerely, " << _name << "\n" << std::endl;
}

// Deconstructor
Zombie::~Zombie()
{
	std::cout << _name << " stepped on a Potato Mine and died.\n"  << std::endl;
}

// Public Methods

void	Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
