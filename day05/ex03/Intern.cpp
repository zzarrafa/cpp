/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 20:40:53 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/06 16:38:36 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


Intern::Intern()
{
    this.list[0] = {" " ,  Intern::makePre};

}
    

    Form* Intern::makeForm(std::string form_name,std::string target)
    {
    

    for (int i = 0; i <= 3; i++)
    {
        if (form_name == list[i].name )
            return list[i].make(target);
    }
}
