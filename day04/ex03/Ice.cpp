/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 20:19:27 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/17 21:46:11 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"



Ice::Ice() : AMateria("ice")
{
    
}

Ice::~Ice()
{
    
} 
Ice::Ice(const Ice &cp)
{
    this->xp = cp.getXP();
    this->type = cp.getType();
   
}
AMateria* Ice::clone() const  
{
    return (AMateria *)new  Ice(*this); 
}


void Ice::use(ICharacter& target)
{
    this->xp += 10;
    std::cout << "* shoots an ice bolt at  "<< target.getName() <<"*"<< std::endl;
}


