/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:21:53 by zineb             #+#    #+#             */
/*   Updated: 2021/03/09 13:25:32 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain &Human::getBrain() 
{
    return this->brain;
}

std::string Human::identify(void) const
{
	return (this->brain.identify());
}

