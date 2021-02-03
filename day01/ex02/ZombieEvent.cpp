/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:49:51 by zineb             #+#    #+#             */
/*   Updated: 2021/02/03 10:23:40 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include " ZombieEvent.hpp"


std::string ZombieEvent::array[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };
ZombieEvent:: ZombieEvent()
{
}

 ZombieEvent::~ ZombieEvent()
{

}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name) 
{
    Zombie *z = new Zombie(name, this->type);
    return (z);
}
 void ZombieEvent::randomChump()
 {
     //Zombie *z= newZombie(array[std::rand()%10]);
     
     //Zombie z = Zombie(array[std::rand()%10], this->type);
 }

