/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:59:48 by zineb             #+#    #+#             */
/*   Updated: 2021/06/23 22:09:33 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>
# include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
    const std::string name ;
       const std::string  target;
    bool sig;
    const int gradeSIG;
    const int gradeEX;
    
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
        class FormnNotSignedException	: public std::exception 
         {
			public:
				virtual const char	*what() const throw();
		};
        Form() ;
        Form(std::string name,int gradeSIG, int gradeEX, std::string target);
        virtual ~Form();
        Form(const Form &cp);
        Form & operator=(const Form &rhs);
        std::string getName() const;
        bool getsig() const;
        int ft_gradeSIG() const;
        int ft_gradeEX() const;
        void beSigned(Bureaucrat &b);
        std::string getTarget(void) const;
        virtual void execute(Bureaucrat const & executor) const =0;

};
std::ostream & operator << ( std::ostream & out, const Form & in);

