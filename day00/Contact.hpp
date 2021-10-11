/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:23:52 by zineb             #+#    #+#             */
/*   Updated: 2021/01/25 16:04:39 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

const int MAX = 8;
const int WITDTH = 10;

class    Contact
{
public:
    Contact(void);
    ~Contact(void);
    void           addContact(Contact *contact, int index);
    void           search(Contact *Contact, int index);
    void           display_infos(Contact *contact, int index);

private:
    std::string     firstName;
    std::string     lastName;
    std::string     nickName;
    std::string     login;
    std::string     postalAddress;
    std::string     emailAdress;
    std::string     phoneNumber;
    std::string     birthdayDate;
    std::string     favoriteMeal;
    std::string     underwearColor;
    std::string     darkestSecret;
};


// void                show(Contact phonebook[], int contact_index);

#endif