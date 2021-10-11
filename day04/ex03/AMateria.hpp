/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:59:19 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/17 20:48:14 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_CLASS_H
# define AMATERIA_CLASS_H

# include <string>
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
    {
        protected:

            unsigned int xp;
            std::string type;
        public:
            AMateria(std::string const & type);
            AMateria();
            virtual ~AMateria();
            AMateria(const AMateria &cp);
            AMateria & operator=(const AMateria & rhs);
            std::string const & getType() const;
            unsigned int getXP() const; 
            virtual AMateria* clone() const = 0;
            void setxp();
            virtual void use(ICharacter& target);
    };

#endif