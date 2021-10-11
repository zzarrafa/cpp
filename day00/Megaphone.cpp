/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:29:12 by zineb             #+#    #+#             */
/*   Updated: 2021/01/25 16:23:30 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


int main()
{
    Contact contact[8];
    int index = 0;
    char *str;
    
    while(1)
    {
        std::cout << "welcome choose ADD , SEARCH or EXIT" << std ::endl;
        std::cin >> str;
        if (strcmp(str, "ADD") == 0)
        {
            if (index > 8)
                {
                    std::cout << "mchi nikmk" << std::endl;
                    continue;
                }
            else
            {
                index++;
                contact->addContact(contact, index);
            }
            
        }
        else if (strcmp(str, "SEARCH") == 0)
        {
            contact->search(contact, index);
        }
        else if (strcmp(str, "EXIT") == 0)
        {
            exit(0);
        }
        
        
        
    }
}