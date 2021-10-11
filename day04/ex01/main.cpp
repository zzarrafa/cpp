/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 17:56:06 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 20:32:41 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
Character* me = new Character("me");
std::cout << *me;
Enemy* b = new RadScorpion();
AWeapon* pr = new PlasmaRifle();
AWeapon* pf = new PowerFist();
me->equip(pr);
std::cout << *me;
me->equip(pf);
me->attack(b);
std::cout << *me;
me->equip(pr);
std::cout << *me;
me->attack(b);
std::cout << *me;
me->attack(b);
std::cout << *me;
return 0;
}

// int main()
// {
//     Character* zaz = new Character("zarafa");

// 	std::cout << *zaz;

// 	Enemy* b = new RadScorpion();
// 	AWeapon* pr = new PlasmaRifle();
// 	AWeapon* pf = new PowerFist();

// 	zaz->equip(pr);
// 	std::cout << *zaz;
// 	zaz->equip(pf);
// 	zaz->attack(b);
// 	std::cout << *zaz;
// 	zaz->equip(pr);
// 	std::cout << *zaz;
// 	zaz->attack(b);
// 	std::cout << *zaz;
// 	zaz->attack(b);
// 	std::cout << *zaz;

// }