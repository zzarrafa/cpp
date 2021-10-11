/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:44:21 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/15 17:18:19 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H

# include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string name;
    std::string title;
public:
    Sorcerer();
    Sorcerer(std::string name, std::string title);
    ~Sorcerer();
   Sorcerer(const Sorcerer &cp);
   std::string getName() const;
   std::string getTitle() const;	
	Sorcerer & operator=(const Sorcerer &rhs);
    void polymorph(Victim const &) const ;
};

std::ostream &	operator << ( std::ostream& out, const Sorcerer & in ) ;



#endif