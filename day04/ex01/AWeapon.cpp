/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:33:05 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/16 19:18:24 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"


AWeapon::AWeapon(std::string const & name, int apcost, int damage)  
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon( const AWeapon & src ) {
	*this = src;
}

AWeapon &			AWeapon::operator = ( const AWeapon & rhs ) {


		name = rhs.name;
		damage = rhs.damage;
		apcost = rhs.apcost;
	
	return (*this);
}


std::string		AWeapon::getName() const 
{
	return name;
}

int				AWeapon::getAPCost() const {
	return (apcost);
}

int				AWeapon::getDamage() const {
	return damage;
}