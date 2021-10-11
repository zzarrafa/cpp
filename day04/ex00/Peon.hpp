/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:44:15 by zineb             #+#    #+#             */
/*   Updated: 2021/07/03 18:42:25 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>
#include "Victim.hpp"


class Peon : public Victim
{

public:
    Peon();
    Peon(std::string name);
    virtual ~Peon();
    Peon(const Peon &cp);
    Peon & operator=(const Peon &rhs);
    virtual void getPolymorphed() const ;

    
};
