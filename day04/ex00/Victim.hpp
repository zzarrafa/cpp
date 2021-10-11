/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:00:35 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/15 17:00:14 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H

# include <string>
#include <iostream>

class Victim
{
protected:
    std::string name;
public:
    Victim();
    Victim(std::string name);
    virtual ~Victim();
    Victim(const Victim &cp);	
	Victim & operator=(const Victim &rhs);
    std::string getName() const;
    virtual void getPolymorphed() const; 
};

std::ostream & operator << ( std::ostream & out, const Victim & in );

#endif


