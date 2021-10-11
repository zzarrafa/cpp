/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 22:03:14 by zineb             #+#    #+#             */
/*   Updated: 2021/07/06 16:37:52 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	Form("robotomy request", 72, 45, target)
{
	this->target = target;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cp) : Form(cp)
{

}
RobotomyRequestForm::~RobotomyRequestForm(void) 
{

}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{ 
	Form::operator=(rhs);
	return *this;
 }

void RobotomyRequestForm::execute(Bureaucrat const &b) const
{
	Form::execute(b);
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized";
	else
		std::cout << this->getTarget() << " could not be robotomized";
}