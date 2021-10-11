/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:35:46 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/16 19:24:49 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"



Enemy::Enemy(int hp, std::string const & type) 
{
    this->hp = hp;
    this->type =  type;
    
}

Enemy::~Enemy()
{
}

Enemy::Enemy(const Enemy &cp) : hp(cp.hp) , type(cp.type)
{

}
Enemy & Enemy::operator=(const Enemy & rhs)
{
    hp = rhs.hp;
    type = rhs.type;
    
    return (*this);
}


std::string  Enemy:: getType() const
{
    return this->type;
}
int Enemy::getHP() const
{
    return this->hp;
}


void	Enemy::takeDamage( int damage ) {

	if (damage < 0)
		return ;

	hp -= damage;

	if (hp <= 0)
		delete this;
}

