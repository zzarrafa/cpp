/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Villager.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 18:38:36 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 18:43:08 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>
#include "Victim.hpp"


class Villager : public Victim
{

public:
    Villager();
    Villager(std::string name);
    virtual ~Villager();
    Villager(const Villager &cp);
    Villager & operator=(const Villager &rhs);
    virtual void getPolymorphed() const ;
};