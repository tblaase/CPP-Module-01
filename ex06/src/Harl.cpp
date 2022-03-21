/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblaase <tblaase@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:21:25 by tblaase           #+#    #+#             */
/*   Updated: 2022/03/21 15:49:48 by tblaase          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Constructors
Harl::Harl()
{
}

// Deconstructors
Harl::~Harl()
{
}

// Private Methods
void	Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

// Public Methods
void	Harl::complain(std::string level)
{
	void    (Harl::*functionPTRS[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	for (; i < 4; i++)
	{
		if (complains[i] == level)
			break ;
	}
	switch(i)
	{
		case(0):
			(this->*functionPTRS[0])();
			// __attribute__ ((fallthrough));// otherwise linux won't compile
		case(1):
			(this->*functionPTRS[1])();
			// __attribute__ ((fallthrough));
		case(2):
			(this->*functionPTRS[2])();
			// __attribute__ ((fallthrough));
		case(3):
			(this->*functionPTRS[3])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
// Getter

// Setter

