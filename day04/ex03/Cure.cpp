/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:21:40 by zineb             #+#    #+#             */
/*   Updated: 2021/06/21 14:23:34 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"



Cure::Cure() : AMateria("cure")
{
    
}

Cure::~Cure()
{
    
} 
Cure::Cure(const Cure &cp)
{
    this->xp = cp.getXP();
    this->type = cp.getType();
   
}
AMateria* Cure::clone() const  
{
    return (AMateria *)new  Cure(*this); 
}


void Cure::use(ICharacter& target)
{
    this->xp += 10;
    std::cout << "* heals " << target.getName() <<"’s wounds *  " << std::endl;
}
