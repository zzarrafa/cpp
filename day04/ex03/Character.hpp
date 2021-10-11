/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 20:57:44 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/21 14:32:48 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_H
# define CHARACTER_CLASS_H

# include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
        int     size;
    
    public:
    
        Character(const std::string name );
        Character(const Character &cp );
        ~Character();
        Character & operator=(const Character &rhs);
        std::string const & getName() const ;
        void equip(AMateria* m) ;
        void unequip(int idx) ;
        void use(int idx, ICharacter& target) ;
};




#endif

