/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:15:24 by zineb             #+#    #+#             */
/*   Updated: 2021/07/03 18:52:02 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Villager.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;
}




// int main ()
// {
//     Sorcerer camelo("camelo","the incridible");
//     Victim me("me");
//     Peon ana("aaa");
//     Villager hmed("hmed");
//     std::cout << me << ana << hmed;
//     camelo.polymorph(hmed);
//     hmed.getPolymorphed();
//     return 0;
// }