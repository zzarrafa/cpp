/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:33:06 by zineb             #+#    #+#             */
/*   Updated: 2021/01/21 00:17:09 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void addContact(Contact *contact, int index)
{
	index = index - 1;
	std::cout << "First Name: ";
	std::cin >> contact[index].firstName;
	std::cout << "Last Name: ";
	std::cin >> contact[index].lastName;
	std::cout << "Nick Name: ";
	std::cin >> contact[index].nickName;
	std::cout << "Login: ";
	std::cin >> contact[index].login;
	std::cout << "Postal Address: ";
	std::cin >> contact[index].postalAddress;
	std::cout << "Email Address: ";
	std::cin >> contact[index].emailAddress;
	std::cout << "Phone Number: ";
	std::cin >> contact[index].phoneNumber;
	std::cout << "Birthday Date: ";
	std::cin >> contact[index].birthdayDate;
	std::cout << "Favorite Meal: ";
	std::cin >> contact[index].favoriteMeal;
	std::cout << "Underwear Color: ";
	std::cin >> contact[index].underwearColor;
	std::cout << "Darkest Secert: ";
	std::cin >> contact[index].darkestSecret;
}

void search(Contact *Contact, int index)
{
    
}
