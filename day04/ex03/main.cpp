/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 21:48:39 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/06 11:40:10 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);

//     delete bob;
//     delete me;
//     delete src;
// return 0;
// }


int main()
{
    ICharacter* bb = new Character("bb");
    IMateriaSource* zineb = new MateriaSource();
     zineb->learnMateria(new Ice());
    zineb->learnMateria(new Cure());
    AMateria* mm;
    mm = zineb->createMateria("ice");
    bb->equip(mm);
     mm = zineb->createMateria("cure");
    bb->equip(mm);
     ICharacter* hh = new Character("hh");
     bb->use(0,*hh);
  bb->use(1,*hh);
     
     delete hh;
     delete zineb;
     delete bb;
}
    
    
