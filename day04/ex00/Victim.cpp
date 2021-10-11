/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:02:55 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 18:54:11 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
    
}

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "Some random victim called " + this->name + " just appeared!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " + this->name + " just died for no apparent reason!" << std::endl;
}


Victim::Victim(const Victim &cp) : name(cp.name)
{
    
}

Victim & Victim::operator = ( const Victim & rhs ) 
{
    name = rhs.name;
	return (*this);
}
 std::string Victim::getName() const
{
    return this->name;
}

std::ostream &	operator << ( std::ostream& out, const Victim & in ) {

	out << "I'm " << in.getName() << " and I like otters !" << std::endl;
	return (out);
}

void Victim::getPolymorphed() const
{
    std::cout << this->name + " has been turned into a cute little sheep!" << std::endl;
} 
