/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 20:40:50 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/06 16:38:18 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>
#include "Form.hpp"




typedef  int (Intern::*Make)(std::string target);

  typedef   struct data {

        string name;
        Make  *func;
          
    }List;

class Intern
{   
    private:
            List c[3];
    public:
        Intern();
       Form* makeForm(std::string form_name,std::string target);
        From *makePre(std::string *target);
       
};