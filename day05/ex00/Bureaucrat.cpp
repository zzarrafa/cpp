/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:42:54 by zineb             #+#    #+#             */
/*   Updated: 2021/06/21 15:49:39 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    
        this->grade = grade;
        if(grade > 150)
            throw GradeTooLowException();
        if(grade < 0)
            throw GradeTooHighException();
        else   
            this->grade = grade;        
}

Bureaucrat::~Bureaucrat()
{
}
Bureaucrat::Bureaucrat(const Bureaucrat &cp) : name(cp.name) , grade(cp.grade)
{
    
}

 Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
    
    
    if ( rhs.grade < 1) 
		throw GradeTooHighException();
	if ( rhs.grade > 150) 
			throw GradeTooLowException();
		 else 
			grade = rhs.grade;
		
	return (*this);
   
}

 int Bureaucrat::getGrade() const
 {
     return this->grade;
 }
 
 std::string Bureaucrat::getName() const
 {
     return this->name;
 }
 
 void Bureaucrat::increment()
 {
     if (grade - 1 < 1)
        throw GradeTooHighException();
     else
        grade--;   
 }
 
 void Bureaucrat::deccrement()
 {
     if (grade + 1 > 150)
        throw GradeTooLowException();
     else 
        grade++;
        
 }
 
const char	*Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("GradeTooHighException");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("GradeTooLowException");
}

std::ostream &	operator << ( std::ostream& out, const Bureaucrat & in ) 
{
	out << "<Bureaucrat> " << in.getName() << " ; Grade : " << in.getGrade();
	return (out);
}