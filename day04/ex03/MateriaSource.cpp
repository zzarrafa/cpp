/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 14:07:42 by zineb             #+#    #+#             */
/*   Updated: 2021/06/21 14:17:13 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() 
{
	for (int i = 0; i < 4; ++i)
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & cp) {
	*this = cp;
}

MateriaSource::~MateriaSource() 
{

	for (int i = 0; i < 4; ++i)
		if (materias[i] != NULL)
			delete (materias[i]);
}


MateriaSource &	MateriaSource::operator = (const MateriaSource &rhs)
 {
		for (int i = 0; i < 4; ++i) {

			if (materias[i] != NULL)
				delete (materias[i]);
			materias[i] = rhs.materias[i]->clone();
		}
	
	return (*this);
}


void MateriaSource::learnMateria(AMateria *m)
{

	if (!m)
		return ;

	for (int i = 0; i < 4; ++i) 
    {

		if (materias[i] == NULL) 
        {
			materias[i] = m;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; ++i)
    {

		if (materias[i] != NULL)
			if (materias[i]->getType() == type)
				return (materias[i]->clone());
	}
	return (0);
}