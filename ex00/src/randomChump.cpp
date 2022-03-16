/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:53:18 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/16 16:50:04 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Basic Zombie

void randomChump(std::string name)
{
	Zombie basic_zombie(name);
	basic_zombie.announce();
}
