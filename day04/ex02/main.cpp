/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:13:33 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/06 11:17:49 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


int main()
{
    ISpaceMarine* bob = new TacticalMarine;
     ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
     vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
    ISpaceMarine* cur = vlc->getUnit(i);
    cur->battleCry();
    cur->rangedAttack();
    cur->meleeAttack();
}
delete vlc;
return 0;
}
int main()
{

// Squad	*army       = new Squad;
// 		Squad	*armyCopy = new Squad;
		

// 		std::cout << "\nArmy Squand Count: " << army->getCount() << "\n";

// 		*armyCopy = *army;

// 		std::cout << "\n*armyCopy = *army;" << std::endl;
// 		std::cout << "armyCopy Squad Count : " << armyCopy->getCount() << std::endl << std::endl;

// 		army->push(new TacticalMarine);
// 		army->push(new AssaultTerminator);
		

// 		std::cout << "\narmyCopy Squad Count : " << armyCopy->getCount() << std::endl;
// 		std::cout << "Army Squand Count: " << army->getCount() << "\n\n";


// 		for ( int i = 0; i < army->getCount(); i += 5 ) {

// 			std::cout << "Unit #" << i << ":" << std::endl;

// 			army->getUnit(i)->battleCry();
// 			army->getUnit(i)->rangedAttack();
// 			army->getUnit(i)->meleeAttack();

// 			std::cout << std::endl;
// 		}

		


// 		delete (army);

// 		delete (armyCopy);

		

// 	return (0);
// }
