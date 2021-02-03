/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ZombieEvent.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:34:43 by zineb             #+#    #+#             */
/*   Updated: 2021/02/03 00:41:25 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include "Zombie.hpp"

class  ZombieEvent
{
private:
    std::string type;
    static std::string array[10];
public:
     ZombieEvent();
    ~ZombieEvent();
    void setZombieType(std::string type);
    Zombie *newZombie(std::string name);
    void randomChump();
    
};

 



#endif