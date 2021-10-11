/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:48:26 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/16 19:47:24 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
    
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
RadScorpion::RadScorpion(const RadScorpion &cp) : Enemy(cp)
{
    
}
RadScorpion & RadScorpion::operator=(const RadScorpion & rhs) 
{
    hp = rhs.hp;
    type = rhs.type;
    
    return (*this); 
}
