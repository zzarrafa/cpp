/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:55:09 by zineb             #+#    #+#             */
/*   Updated: 2021/07/06 16:37:41 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	Form("presidential pardon", 25, 5, target) 
{

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cp) : Form(cp)
{
    
}

PresidentialPardonForm::~PresidentialPardonForm(void) {}

PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs)
{ 

	Form::operator=(rhs);
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	Form::execute(b);
	std::cout << this->getTarget() << " has been pardonned by Zaphod Beeblebrox";
}