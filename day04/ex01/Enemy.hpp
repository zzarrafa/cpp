/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:32:39 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/16 13:25:38 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include <string>
#include <iostream>


class Enemy
{
protected:
    int hp;
    std::string type;
public:
    Enemy(int hp, std::string const & type);
    virtual ~Enemy();
    Enemy(const Enemy &cp);
    Enemy & operator=(const Enemy & rhs);
    std::string  getType() const;
    int getHP() const;
    virtual void takeDamage(int damage);
};




#endif