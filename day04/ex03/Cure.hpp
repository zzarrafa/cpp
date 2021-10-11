/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:20:50 by zineb             #+#    #+#             */
/*   Updated: 2021/06/21 14:21:08 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_H
# define CURE_CLASS_H

# include <string>
#include <iostream>
#include "ICharacter.hpp"

class Cure : public AMateria
    {
        public:
            Cure();
            ~Cure();
            Cure(const Cure &cp);
            Cure & operator=(const Cure &rhs) ;
            AMateria* clone() const ;
            void use(ICharacter& target);
    };

#endif