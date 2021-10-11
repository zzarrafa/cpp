/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:05:56 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/16 19:49:11 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"



PowerFist::PowerFist() : AWeapon("Power Fist",8,50)
{

}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist &cp) : AWeapon(cp)
{
    
}

PowerFist & PowerFist::operator=(const PowerFist &rhs)
{
    name = rhs.name;
    apcost = rhs.apcost;
    damage = rhs.damage;
    
    return (*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}