/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:50:04 by zineb             #+#    #+#             */
/*   Updated: 2021/02/02 22:46:23 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, std::string color)
{
     this->name = name;
     this->color = color;

}

Pony::~Pony()
{
}

std::string Pony::getName()
{
    return (this->name);
}


std::string Pony::getColor()
{
    return (this->color);
}

