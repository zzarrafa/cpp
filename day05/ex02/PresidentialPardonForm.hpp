/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 21:37:28 by zineb             #+#    #+#             */
/*   Updated: 2021/06/23 22:05:14 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>
# include <exception>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:
    PresidentialPardonForm(const std::string target);
    virtual ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &cp);
    PresidentialPardonForm & operator=(const PresidentialPardonForm &rhs);
    void execute(Bureaucrat const &) const;
    
};