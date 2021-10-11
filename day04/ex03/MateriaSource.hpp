/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 21:46:47 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/21 14:13:55 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MATERIASOURCE_CLASS_H
# define MATERIASOURCE_CLASS_H

# include <string>
#include <iostream>
#include "IMateriaSource.hpp"



class MateriaSource : public IMateriaSource
{
    	private:
            AMateria *materias[4];

	    public:

		    MateriaSource( void );
		    MateriaSource( const MateriaSource & src );
		    ~MateriaSource( void );

		    MateriaSource &		operator = ( const MateriaSource & rhs );

		    void		learnMateria   ( AMateria *m );
		    AMateria	*createMateria ( const std::string & type );
    
};

#endif