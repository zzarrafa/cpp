/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:16:23 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 17:03:28 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{

}

ScavTrap :: ScavTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
}

ScavTrap::~ScavTrap()
{
	std::cout << "ths destructor of scavtrap is called" << std::endl;
    
}
ScavTrap::ScavTrap(const ScavTrap &cp) : ClapTrap(cp)
{
	std::cout << "ths copy constructor of scavtrap is called" << std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap& other)
{
    this->Hit_points = other.Hit_points;
    
    this->attack_damage = other.attack_damage;
    this->Energy_points = other.Energy_points;
    
    
    return other;
}


void ScavTrap::guardGate()

{
    	std::cout <<  this->name + " have entered in the Gate keeper mode !!" << std::endl;
}

