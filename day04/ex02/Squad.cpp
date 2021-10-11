/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:36:59 by zineb             #+#    #+#             */
/*   Updated: 2021/06/17 17:56:17 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad() : count_squad(0) ,squad(NULL) 
{
    
}

Squad::~Squad()
{

    marine_t *t;
 
    
    while(squad)
    {
        t = squad;
        squad = squad->next;
        delete(t->unit);
    }    

}
int Squad::getCount()const
{
    return count_squad;
}



 Squad & Squad::operator=(const Squad &cp){

            marine_t	*s;
	marine_t	*tmp;
    
    if (this->squad == NULL)
        return (*this);
    if (cp.squad == NULL)
        return (*this);

	s = squad;
	while (s) 
    {
		tmp = s;
		s = s->next;
		delete (tmp->unit);
		delete (tmp);
    }
    
    marine_t *m = cp.squad;

    for (int i =0; i <= cp.getCount();i++)
    {
      
        this->push(m->unit->clone());

        m = m->next;
        
    }

    
    this->count_squad =  cp.count_squad;

    return (*this);
}


Squad::Squad(const Squad &cp)
{
   *this = cp;
    
}



ISpaceMarine *Squad::getUnit(int N) const {

	if (!squad)
		return (0);

	marine_t	*tmp;
	int		i;

	i = 0;
	tmp = squad;
	while (tmp && i < count_squad)
	{
		if (i == N)
			return (tmp->unit);
		tmp = tmp->next;
		++i;
	}
	return (NULL);
}

int Squad::push(ISpaceMarine *obj)
{
    marine_t *marine = new marine_t;
     marine->unit = obj;
    marine->next = NULL;
        
    if (!obj)
    {
        return this->count_squad;
    }
    if (this->squad == NULL)
    {

        this->squad = marine;

        this->count_squad ++;
        return this->count_squad;
    }
    marine_t *tmp =  this->squad;
    while (tmp->next)
    {
        if (tmp->unit == obj)
        {
            return this->count_squad;
        }
        tmp = tmp->next;
    }
    tmp->next = marine;
    this->count_squad ++;
    return this->count_squad;
}