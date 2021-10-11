/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 18:27:55 by zineb             #+#    #+#             */
/*   Updated: 2021/07/06 15:22:26 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

int main()
{
    Form* cc = new Form("zz", 10, 30);
    Form* toHigh;
    Form* toLow;
    (void)toHigh;
    (void)toLow;
    std::cout << *cc;
    
    try
    {
        toHigh = new Form("ToHigh", 0, 20);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
       toLow = new Form("ToLow", 10, 199);
    }
    catch(std::exception & e)
    {
        std::cerr << e.what() << std::endl;
    }

    Bureaucrat* bob = new Bureaucrat("BB", 5);
    
    std::cout << *bob;

    bob->signForm(cc);

    std::cout << *cc;

    bob->signForm(cc);

    Form* nop = new Form("zz", 1, 1);
    Bureaucrat* n = new Bureaucrat("1337", 12);

    n->signForm(nop);
    
    delete cc;
    delete bob;
    delete nop;
    delete n;
}
