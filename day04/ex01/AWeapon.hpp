/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 16:33:10 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 19:11:58 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_CLASS_H
# define AWEAPON_CLASS_H

# include <string>
# include <iostream>



class AWeapon
{
protected:
    std::string name;
    int damage;
    int apcost;
public:
    AWeapon(std::string const & name, int apcost, int damage);
    virtual ~AWeapon();
    AWeapon( const AWeapon & src );
    AWeapon &		operator = ( const AWeapon & rhs );
     std::string getName() const;
     int getAPCost() const;
     int getDamage() const;
     virtual void attack() const = 0;
};




#endif