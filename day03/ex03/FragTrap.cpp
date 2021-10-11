/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:45:16 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 17:06:29 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	
}

FragTrap::FragTrap(std::string name) : ClapTrap(name,100,100,30)
{
	
}


FragTrap::FragTrap(const FragTrap &cp) : ClapTrap(cp)

{
	std::cout << "I don't have the reference , but the Copy Constructor of fragtrap is called" << std::endl;
}


FragTrap::~FragTrap(void)
{
	std::cout << "the destructor is called" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "Hey !! Would you give me an high five ??" << std::endl;
}
