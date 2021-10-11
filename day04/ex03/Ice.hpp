/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 20:12:35 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/17 20:55:48 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_CLASS_H
# define ICE_CLASS_H

# include <string>
#include <iostream>
#include "ICharacter.hpp"

class Ice : public AMateria
    {
        public:
            Ice();
            ~Ice();
            Ice(const Ice &cp);
            Ice & operator=(const Ice &rhs) ;
            AMateria* clone() const ;
            void use(ICharacter& target);
    };

#endif