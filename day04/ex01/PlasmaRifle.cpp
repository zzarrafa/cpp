/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:06:18 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/16 19:50:09 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PlasmaRifle.hpp"


PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle",5,21)
{
}

PlasmaRifle::~PlasmaRifle()
{
}
PlasmaRifle::PlasmaRifle(const PlasmaRifle &cp) : AWeapon(cp)
{
    
}

PlasmaRifle & PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
    name = rhs.name;
    apcost = rhs.apcost;
    damage = rhs.damage;
    
    return (*this);
}
void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}