/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 20:52:17 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 19:38:50 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#include "DiamondTrap.hpp"



DiamondTrap::DiamondTrap( std::string name ) :  ClapTrap(name + "_clap_name" ,100, 50, 30) , name(name)
{
    std::cout << "DiamondTrap Constructor" << std::endl;
} 

DiamondTrap::DiamondTrap( DiamondTrap const& src )
{
    *this = src;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "diamondTrap destructor" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & rhs ) 
{


    
    ClapTrap::operator=(rhs);
    this->name = rhs.name;

    return *this;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "My Diamond Name is: " << this->name << ".\nClapTrap name is: " <<  this->name + "_clap_name" << std::endl;
}
