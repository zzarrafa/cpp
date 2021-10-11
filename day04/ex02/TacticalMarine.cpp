/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 15:57:12 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/17 17:55:16 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"


TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}



TacticalMarine::TacticalMarine(const TacticalMarine &cp)
{
    *this = cp;
}

TacticalMarine & TacticalMarine::operator=(const TacticalMarine &rhs)
{
    ISpaceMarine::operator=(rhs);
    
    return (*this);
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}
ISpaceMarine *TacticalMarine::clone() const
{
	return ((ISpaceMarine*)new TacticalMarine(*this));
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with a chainsword *" << std::endl;
}