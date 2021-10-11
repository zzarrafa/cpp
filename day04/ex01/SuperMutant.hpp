/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:43:35 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 20:34:31 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_CLASS_H
# define SUPERMUTANT_CLASS_H

#include <string>
#include <iostream>
#include "Enemy.hpp"


class SuperMutant : public Enemy
{
    public:
        
        SuperMutant();
        virtual ~SuperMutant();
        SuperMutant(const SuperMutant &cp);
        SuperMutant & operator=(const SuperMutant & rhs);
        void takeDamage(int damage);
};




#endif