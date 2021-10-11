/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Villager.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:38:42 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 18:39:13 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Villager.hpp"


Villager::Villager(std::string name) : Victim(name)
{
    std::cout << "salamo3alikom" << std::endl;
}

Villager::~Villager()
{
    std::cout << "achhado ana la ilaha ila lah" << std::endl;
}

Villager::Villager(const Villager & cp) : Victim(cp)
{

}
Villager & Villager::operator=(const Villager &rhs)
{
    name = rhs.name;

    return (*this);
}

void	Villager::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a giraffe !" << std::endl;
}