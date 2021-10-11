/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 20:20:12 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/17 20:50:06 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"


AMateria::AMateria(std::string const & type) : type(type)
{
    this->xp =0;
}

AMateria::~AMateria()
{
    
}

std::string const & AMateria::getType() const
{
    return type;
}

AMateria::AMateria(const AMateria &cp) : xp(cp.xp) ,type(cp.type)
{
    
}

 unsigned int AMateria::getXP() const
 {
     return xp;
 }
 
AMateria & AMateria::operator=(const AMateria & rhs)
{
      this->xp = rhs.xp ;
      this->type = rhs.type;
    return (*this);
}

AMateria::AMateria()
{
    this->xp =0;
}
void AMateria::setxp()
{

}
 void		AMateria::use(ICharacter& target)
{
	(void)target;
	this->setxp();
}