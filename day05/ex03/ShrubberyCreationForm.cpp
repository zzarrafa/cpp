/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 22:13:51 by zineb             #+#    #+#             */
/*   Updated: 2021/07/06 16:37:58 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) :
	Form("shrubbery creation", 145, 137, target)
{
  this->target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cp) : Form(cp)
{}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{ 
  Form::operator=(rhs);
  return *this;
}

const std::string tree = "\
              v .   ._, |_  .,\n\
           `-._\\/  .  \\ /    |/_\n\
               \\\\  _\\, y | \\//\n\
         _\\_.___\\\\, \\\\/ -.\\||\n\
           `7-,--.`._||  / / ,\n\
           /'     `-. `./ / |/_.'\n\
                     |    |//\n\
                     |_    /\n\
                     |-   |\n\
                     |   =|\n\
                     |    |\n\
--------------------/ ,  . \\--------._\n\
";

void ShrubberyCreationForm::execute(Bureaucrat const &b) const
{
  Form::execute(b);
	std::ofstream of(this->getTarget() + "_shrubbery");
	of << tree << std::endl;
	of.close();
}
