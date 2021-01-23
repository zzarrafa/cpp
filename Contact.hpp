/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:23:52 by zineb             #+#    #+#             */
/*   Updated: 2021/01/20 23:56:25 by zineb            ###   ########.fr       */
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

private:
    std::string     firstName;
    std::string     lastName;
    std::string     nickname;
    std::string     login;
    std::string     postalAddress;
    std::string     emailAdress;
    std::string     phoneNumber;
    std::string     birthdayDate;
    std::string     favoriteMeal;
    std::string     underwearColor;
    std::string     darkestSecret;
};

Contact             addContact(void);
void                showPhonebook(Contact phonebook[], int contact_index);

#endif