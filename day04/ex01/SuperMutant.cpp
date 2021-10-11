/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:43:49 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/16 19:47:03 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "Enemy.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
    
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &cp) : Enemy(cp)
{
    
}
SuperMutant & SuperMutant::operator=(const SuperMutant & rhs) 
{
    hp = rhs.hp;
    type = rhs.type;
    
    return (*this); 
}

void SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}