/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:37:08 by zineb             #+#    #+#             */
/*   Updated: 2021/06/16 19:43:30 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : 
name(name) , AP(40), weapon(NULL)
{
    
}

Character::~Character()
{
}

Character::Character(const Character &cp) 
{
    *this = cp;
}
Character & Character::operator=(const Character & rhs) 
{
    name = rhs.name;
    AP = rhs.AP;
    
    return (*this); 
}


void Character::attack(Enemy* enemy)
{
    


	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
    weapon->attack();
	if (weapon == NULL || AP <= 0)
		return ;

	if (AP < weapon->getAPCost())
		return ;

	AP -= weapon->getAPCost();
	enemy->takeDamage( weapon->getDamage() );
    	

}
void	Character::equip( AWeapon *w ) 
{
	this->weapon = w;
}

void Character::recoverAP()
{
    if (AP >= 40)
        return;
    AP += 10;    
}
int Character::getAP() const
{
    return this->AP;
}

AWeapon			*Character::getWeapon() const
 {
	return (weapon);
}
std::string Character::getName() const
{
	return this->name;
}

std::ostream &		operator << ( std::ostream& out, const Character & in ) {

	if (in.getWeapon() != NULL)
		out << in.getName() << " has " << in.getAP() << " AP and wields a " << in.getWeapon()->getName() << std::endl;

     else 
		out << in.getName() << " has " << in.getAP() << " AP and is unarmed" << std::endl;

	
	return (out);
}