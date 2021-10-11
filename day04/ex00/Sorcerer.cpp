/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:43:03 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/15 17:18:41 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


Sorcerer::Sorcerer()
{
    
}
Sorcerer::Sorcerer(std::string name, std::string title) : name(name) , title(title)
{
    std::cout << this->name + "," + this->title + ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name + "," + this->title + ", is dead. Consequences will never be the same!" << std::endl;
}


Sorcerer::Sorcerer(const Sorcerer &cp) : name(cp.name) , title(cp.title)
{

}

Sorcerer & Sorcerer::operator = ( const Sorcerer & rhs ) 
{
    name = rhs.name;
    title = rhs.title;
	return (*this);
}
 std::string Sorcerer::getName() const
{
    return this->name;
}

 std::string Sorcerer::getTitle() const
{
    return this->title;
}

std::ostream &	operator << ( std::ostream& out, const Sorcerer & in ) {

	out << "I'm " << in.getName() << ", " << in.getTitle() << ", and I like ponies !" << std::endl;
	return (out);
}
void Sorcerer::polymorph(Victim const &target) const
{
    target.getPolymorphed();
}