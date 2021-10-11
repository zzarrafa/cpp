/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:44:25 by zineb             #+#    #+#             */
/*   Updated: 2021/06/23 22:05:43 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
# include <string>
#include <iostream>
# include <exception>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
std::string target;
   
public:
    RobotomyRequestForm(const std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &cp);
    RobotomyRequestForm & operator=(const RobotomyRequestForm &rhs);
    void execute(Bureaucrat const &b) const;
    
};