/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 21:12:28 by zineb             #+#    #+#             */
/*   Updated: 2021/02/02 22:47:03 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


void ponyOnTheHeap()
{
    Pony *p = new Pony("jamila","white");
    
    std::cout << p->getName() + " the " + p->getColor() + " Pony  is allocated on heap" << std::endl;
    
    std::cout << "the pony is deleted , say bye bye " + p->getName() << std::endl;
    delete p;
    
}

void ponyOnTheStack()
{
    Pony p("sa3id","black");
    std::cout << p.getName() + " the " + p.getColor() + " Pony  is allocated on stack" << std::endl;
}
int main()
{
    
    ponyOnTheHeap();
    ponyOnTheStack();
    return 0;
}
