/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 13:37:02 by zineb             #+#    #+#             */
/*   Updated: 2021/06/16 19:42:07 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

# include <string>
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"


class AWeapon ;
class Character
{
private:
    std::string name;
    int AP;
    AWeapon *weapon;
    
public:
    Character(std::string const & name);
    ~Character();
    Character(const Character &cp);
    Character & operator=(const Character &rhs);
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string getName() const;
    int getAP() const;
    AWeapon *getWeapon() const;
};


std::ostream & operator << ( std::ostream & out, const Character & in );
#endif