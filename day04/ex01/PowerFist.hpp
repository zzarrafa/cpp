/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:04:04 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 19:12:41 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:
    PowerFist();
    virtual ~PowerFist();
    PowerFist(const PowerFist &cp);
    PowerFist & operator=(const PowerFist &rhs);
    int getAPCost() const;
    int getDamage() const;
    void attack() const ;
};