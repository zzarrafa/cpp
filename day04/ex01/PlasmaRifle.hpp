/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:44:23 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 19:16:35 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_CLASS_H
# define PLASMARIFLE_CLASS_H

# include <string>
#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

public:
    PlasmaRifle();
    virtual ~PlasmaRifle();
    PlasmaRifle(const PlasmaRifle &cp);
    PlasmaRifle & operator=(const PlasmaRifle &rhs);
    int getAPCost() const;
    int getDamage() const;
    void attack() const ;
};

#endif