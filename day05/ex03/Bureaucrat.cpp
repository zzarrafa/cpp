/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:42:54 by zineb             #+#    #+#             */
/*   Updated: 2021/07/06 16:39:06 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    
        if(grade > 150)
            throw GradeTooLowException();
        if(grade <= 0)
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
    name = rhs.name;
    
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
 
 void Bureaucrat::signForm(Form *form)
{
    if (form->getsig() == true)
        std::cout << "<bureaucrat> signs <form>" << std::endl;
    else
        std::cout << "<bureaucrat> cannot sign <form> because <reason>" << std::endl;

}
 void Bureaucrat::deccrement()
 {
     if (grade + 1 > 150)
        throw GradeTooLowException();
     else 
        grade++;
        
 }
 std::ostream &	operator << ( std::ostream& out, const Bureaucrat & in ) 
{
	out << "<Bureaucrat> " << in.getName() << " ; Grade : " << in.getGrade();
	return (out);
}
void Bureaucrat::executeForm(Form const & form)
{
    try {
    form.execute(*this);
    std::cout<< "<bureaucrat> executes <form>" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout<<"error hh" << std::endl;

    }
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("GradeTooHighException");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("GradeTooLowException");
}

