/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:50:07 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 20:34:24 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_CLASS_H
# define RADSCORPION_CLASS_H

#include <string>
#include <iostream>
#include "Enemy.hpp"


class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        virtual ~RadScorpion();
        RadScorpion(const RadScorpion &cp);
        RadScorpion & operator=(const RadScorpion & rhs);
        
        
        
};




#endif