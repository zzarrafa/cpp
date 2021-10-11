/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:45:16 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/09 18:51:50 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string name) :
	name(name), Hit_points(10), Energy_points(10), attack_damage(10)
{
	std::cout << "the Constructor of Claptrap is called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &cp) :
	name(cp.name), Hit_points(cp.Hit_points),Energy_points(cp.Energy_points), attack_damage(cp.attack_damage)
	{
	std::cout << "but the Copy Constructor of claptrap is called" << std::endl;
}


ClapTrap::~ClapTrap(void)
{
	std::cout << "the destructor of claptrap is called" << std::endl;
}


void ClapTrap::attack(std::string const &target)
{
	std::cout << "FR4G-TP <" + this->name + "> attacks <" + target + "> at range, causing" 
    << this->attack_damage << "points of damage!";
	std::cout << std::endl;
}



void ClapTrap::takeDamage(unsigned int amount)
{

	if (amount >= this->attack_damage)
		amount -= this->attack_damage;
	

	std::cout << this->name << " took " << amount << " damage"
		<< std::endl;

	if (this->Energy_points >= amount)
		this->Energy_points -= amount;	
}

void ClapTrap::beRepaired(unsigned int amount)
{

	std::cout <<  this->name << " was repaired for " << amount
		<< " hit points" << std::endl;

	this->Energy_points += amount;
}



ClapTrap &	ClapTrap::operator=(const ClapTrap &rhs)
{
	this->name = rhs.name;
	this->Hit_points = rhs.Hit_points;
	this->Energy_points = rhs.Energy_points;
	this->attack_damage = rhs.attack_damage;

return (*this);

}