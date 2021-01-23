/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:29:12 by zineb             #+#    #+#             */
/*   Updated: 2021/01/21 00:13:21 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


int main()
{
    Contact contact[8];
    int index = 0;
    string str;
    
    while(1)
    {
        std::cout << "welcome choose ADD , SEARCH or EXIT" << std ::endl;
        std::cin >> str;
        if (strcmp(str, "ADD") == 0)
        {
            if (index > 8)
                std::cout << "mchi nikmk" << std:endl;
                continue;
            else
            {
                index++;
                addContact(contact,index);
            }
            
        }
        else if (strcmp(command, "SEARCH") == 0))
        {
            if
        }
        
        
    }
}