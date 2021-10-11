/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:11:56 by zineb             #+#    #+#             */
/*   Updated: 2021/06/21 16:36:18 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS_H
# define BUREAUCRAT_CLASS_H

# include <string>
#include <iostream>

class Bureaucrat
{
private:
    const std::string name;
    int grade;
public:

    class GradeTooHighException	: public std::exception {
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException	: public std::exception {
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
};

std::ostream & operator << ( std::ostream & out, const Bureaucrat & in );
#endif