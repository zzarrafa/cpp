/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:51:45 by zineb             #+#    #+#             */
/*   Updated: 2021/06/15 17:00:23 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"


Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon & cp) : Victim(cp)
{

}
Peon & Peon::operator=(const Peon &rhs)
{
    name = rhs.name;

    return (*this);
}

void	Peon::getPolymorphed() const {
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}