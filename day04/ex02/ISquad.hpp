/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 23:44:40 by zineb             #+#    #+#             */
/*   Updated: 2021/06/17 11:33:11 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISQUAD_HPP_CLASS
#define ISQUAD_HPP_CLASS


#include <string>
#include <iostream>
#include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual ~ISquad() {}
        virtual int getCount() const = 0;
        virtual ISpaceMarine* getUnit(int) const = 0;
        virtual int push(ISpaceMarine*) = 0;
};

#endif