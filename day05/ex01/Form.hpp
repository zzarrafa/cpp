/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:59:48 by zineb             #+#    #+#             */
/*   Updated: 2021/06/21 18:44:09 by zineb            ###   ########.fr       */
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
    const std::string name;
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

        Form(std::string name,int gradeSIG, int gradeEX);
        ~Form();
        Form(const Form &cp);
        Form & operator=(const Form &rhs);
        std::string getName() const;
        bool getsig() const;
        int ft_gradeSIG() const;
        int ft_gradeEX() const;
        void beSigned(Bureaucrat b);
};
std::ostream & operator << ( std::ostream & out, const Form & in );

