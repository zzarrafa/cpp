/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:27:08 by zineb             #+#    #+#             */
/*   Updated: 2021/03/02 15:27:49 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name,std::string type) : name(name), type(type)
{
    // this->announce();
}

Zombie::~Zombie()
{
    
}

void Zombie::announce()
{
    std::cout << (this->name + "(" + this->type + ") Braiiiiiiinnnssss..." );
    std::cout << std::endl;
    
}

std::string Zombie::getname()
{
    return this->name;
}

std::string Zombie::gettype()
{
    return this->type;
}

Zombie::Zombie()
{
}