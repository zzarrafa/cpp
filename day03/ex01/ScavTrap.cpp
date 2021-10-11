/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:16:23 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/24 18:24:30 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"
ScavTrap :: ScavTrap(std::string name) : ClapTrap(name,100,50,20)
{
    std::cout << "the Constructor of scavtrap trap is called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "the destructor of scavtrap trap is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &cp) : ClapTrap(cp)
{
std::cout << "fthe copy Constructor of scavtrap is called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap& other) 
{	
	ClapTrap::operator=(other);
    return  (*this);
}
void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTRAP <" + this->name + "> attacks <" + target + "> at range, causing" 
    << this->attack_damage << "points of damage!";
	std::cout << std::endl;
}

void ScavTrap::guardGate()

{
    	std::cout <<  this->name + " have entered in the Gate keeper mode !!" << std::endl;
}

