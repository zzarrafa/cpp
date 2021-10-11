/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 21:11:32 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/21 14:29:33 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
#include "AMateria.hpp"

Character::~Character()
{
    for(int i = 0; i < this->size; i++)
    {
        if (inventory[i])
            delete (inventory[i]);
    }
}


Character::Character(const std::string  name)
{
    this->name = name;
    this->size = 0;
}


Character::Character(const Character &cp)
{
 
    *this = cp;

}

Character & Character::operator=(const Character &rhs)
   {
       if (this != &rhs)
       {
        this->name = rhs.name;
        this->size = rhs.size;


            for(int i = 0; i < this->size; i++)
            {
                if (inventory[i])
                    delete (inventory[i]);
            }
            for (int i = 0; i < rhs.size; i++)
            {
                this->inventory[i] = rhs.inventory[i]->clone();
            }
            
       }
    return (*this);
    
   }
std::string const &Character::getName() const
{
    return this->name;
}
 
void    Character::equip(AMateria * m)
{
    if (this->size == 3)
        return ;
    this->inventory[size] = m;
    size++;
}


void    Character::unequip(int index)
{
    if (index > 3 || index < 0 )
        return;
    this->size--;
    this->inventory[index] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx > 3 || idx < 0 )
        return;
    if (this->inventory[idx])
        this->inventory[idx]->use(target);
}

