/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 10:06:09 by zineb             #+#    #+#             */
/*   Updated: 2021/02/03 10:22:21 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " ZombieEvent.hpp"
#include "Zombie.hpp"
#include <string>

int main()
{
    Zombie *z;
    ZombieEvent ze;
    
    ze.setZombieType("dangerous");
    ze.randomChump();
    std::cout << z->annonce();
    delete z;
}