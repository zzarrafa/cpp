/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:35:27 by zineb             #+#    #+#             */
/*   Updated: 2021/07/06 13:03:33 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_CLASS_H
# define SQUAD_CLASS_H

# include <string>
#include <iostream>
#include "ISquad.hpp"

typedef struct s_marine {
	ISpaceMarine	*unit;
	struct s_marine			*next;
} marine_t;

class Squad : public ISquad
{
    private:
     int count_squad;
      marine_t *squad;  
    
    public:
        Squad();
        ~Squad();
        Squad( const Squad & cp );
        Squad & operator=(const Squad &rhs);
        int getCount() const;
        ISpaceMarine *getUnit(int) const;
        int push(ISpaceMarine *obj);
        
};

#endif