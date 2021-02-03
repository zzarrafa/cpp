/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:27:08 by zineb             #+#    #+#             */
/*   Updated: 2021/02/03 10:18:22 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name,std::string type) : name(name), type(type)
{
    
    this->annonce();
}

Zombie::~Zombie()
{
}
std::string Zombie::annonce()
{
    return (this->name + "(" + this->type + ") Braiiiiiiinnnssss...");
    
}

std::string Zombie::getname()
{
    return this->name;
}

std::string Zombie::gettype()
{
    return this->type;
}