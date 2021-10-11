/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:59:57 by zineb             #+#    #+#             */
/*   Updated: 2021/07/03 18:35:08 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name,const int gradeSIG, const int gradeEX) : 
name(name) , gradeSIG(gradeSIG),gradeEX(gradeEX)
{
	sig = false;
    if (gradeEX <= 0 || gradeSIG <= 0)
         throw GradeTooHighException();
    if (gradeEX > 150 || gradeSIG > 150)
         throw GradeTooLowException();   
		 
}

Form::~Form()
{
    
}

Form::Form(const Form &cp) : name(cp.name), gradeSIG(cp.gradeSIG), gradeEX(cp.gradeEX)
{
	sig = cp.getsig();     
    
}

Form & Form::operator=(const Form &rhs)
{
    sig= rhs.sig;
	return (*this);
}
 int Form::ft_gradeSIG() const
 {
     return this->gradeSIG;
 }
   
int Form::ft_gradeEX() const
 {
     return this->gradeEX;
 }
 
 std::string Form::getName() const
 {
     return this->name;
 }
 bool Form::getsig() const
 {
     return this->sig;
 }
 
 void Form::beSigned(Bureaucrat bureaucrat)
 {
 int bureaucratGrade = bureaucrat.getGrade();

	if ( bureaucratGrade < 1)
		throw GradeTooHighException();
	if ( bureaucratGrade > 150)
		throw GradeTooLowException();

	if ( sig) 
		throw "form already signed";
	 else if ( bureaucratGrade > gradeSIG ) 
		throw "signature grade requirement not met";
	 else 
		sig = true;
	

}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form name : " << i.getName() << " signed :" << i.getsig() << " required grade to sign : " << i.ft_gradeSIG() << " required grade to execute : " << i.ft_gradeEX() << std::endl;
	return o;
}
const char	*Form::GradeTooHighException::what() const throw() 
{
	return ("GradeTooHighException");
}

const char	*Form::GradeTooLowException::what() const throw() 
{
	return ("GradeTooLowException");
}
