/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:21:47 by zineb             #+#    #+#             */
/*   Updated: 2021/03/09 13:23:38 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <memory>

Brain::Brain(int iq_level) : iq_level(iq_level)
{
    
}

Brain::~Brain()
{
    
}
int Brain::get_IQ()
{
    return this->iq_level;
}
std::string Brain::identify() const
{
	long adr = (long)this;

	std::stringstream ss;
	ss << "0x" << std::uppercase << std::hex << adr;
	return (ss.str());
}

