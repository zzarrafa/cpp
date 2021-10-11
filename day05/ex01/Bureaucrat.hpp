/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:11:56 by zineb             #+#    #+#             */
/*   Updated: 2021/07/06 15:19:31 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:

    class GradeTooHighException	: public std::exception 
        {
			public:
				virtual const char	*what() const throw();
		};

	class GradeTooLowException	: public std::exception 
        {
			public:
				virtual const char	*what() const throw();
		};
    Bureaucrat(std::string name, int grade);
    
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat &cp);
    Bureaucrat & operator=(const Bureaucrat &rhs);
    std::string getName() const;
    int getGrade() const;
    void increment();
    void deccrement();
    void signForm(Form *form);
};

std::ostream & operator << ( std::ostream & out, const Bureaucrat & in );
