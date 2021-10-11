/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:00:54 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/17 17:55:02 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"


AssaultTerminator::AssaultTerminator()
{
    std::cout << "* teleports from space *" << std::endl;
}



AssaultTerminator::AssaultTerminator(const AssaultTerminator &cp)
{
    *this = cp;
}

AssaultTerminator & AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
    ISpaceMarine::operator=(rhs);
    return  (*this);
   
}

AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back..." << std::endl;
}
ISpaceMarine *AssaultTerminator::clone() const
{
	return ((ISpaceMarine*)new AssaultTerminator(*this));
}

void AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}