/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:11:03 by zineb             #+#    #+#             */
/*   Updated: 2021/02/05 13:02:42 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

std::string ZombieHorde::name[10] = { "budz", "pain", "konan", "nagato", "itachi", "tobi", "madara", "naruto", "danzou", "kakashi" };

std::string ZombieHorde::type[3] = {"dangerous", "kind", "funny"};

ZombieHorde::ZombieHorde(int n) : nbr(n)
{
       *this->zombie = new Zombie[n];
        for(int i =0;i <n;i++)
        {
            this->zombie[i] = new Zombie("hh","ttt");
        }
        
}

ZombieHorde::~ZombieHorde()
{
    //delete [] this->zombie;
}

void ZombieHorde::announce(void)
{
    std::cout << this->nbr << std::endl;
	for (int i = 0; i < this->nbr ; i++)
		zombie[i]->announce();
}