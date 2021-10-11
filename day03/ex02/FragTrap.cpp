/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:45:16 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/30 10:38:15 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	
}

FragTrap::FragTrap(std::string name) : ClapTrap(name,100,100,30)
{
	std::cout << " the  Constructor of fragtrap is called" << std::endl;
}


FragTrap::FragTrap(const FragTrap &cp) : ClapTrap(cp)

{
	std::cout << " but the Copy Constructor of fragtrap is called" << std::endl;
}


FragTrap::~FragTrap(void)
{
	std::cout << "the destructor is called" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "Hey !! high five corrector" << std::endl;
}
