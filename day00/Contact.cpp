/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 23:33:06 by zineb             #+#    #+#             */
/*   Updated: 2021/01/25 16:11:15 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::addContact(Contact *contact, int index)
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
	std::cin >> contact[index].emailAdress;
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
void Contact::display_infos(Contact *contact, int index)
{
	std::cout << "First Name: ";
	std::cout << contact[index].firstName << std::endl;
	std::cout << "Last Name: ";
	std::cout << contact[index].lastName << std::endl;
	std::cout << "Nick Name: ";
	std::cout << contact[index].nickName << std::endl;
	std::cout << "Login: ";
	std::cout << contact[index].login << std::endl;
	std::cout << "Postal Address: ";
	std::cout << contact[index].postalAddress << std::endl;
	std::cout << "Email Address: ";
	std::cout << contact[index].emailAdress << std::endl;
	std::cout << "Phone Number: ";
	std::cout << contact[index].phoneNumber << std::endl;
	std::cout << "Birthday Date: ";
	std::cout << contact[index].birthdayDate << std::endl;
	std::cout << "Favorite Meal: ";
	std::cout << contact[index].favoriteMeal << std::endl;
	std::cout << "Underwear Color: ";
	std::cout << contact[index].underwearColor << std::endl;
	std::cout << "Darkest Secert: ";
	std::cout << contact[index].darkestSecret << std::endl;
	
}
void print(std::string str)
{
	
	int len = str.length();
	if (len >10)
	{
		str[9] = '.';
		str = str.substr(0.10);
		std::cout << str;
	}
	else
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << str;
	}
	
}
void Contact::search(Contact *contact, int index)
{
	int n = index;
	index = 0;
	int desired_index;
	
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << "INDEX";
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << "FIRST NAME";
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << "LAST NAME";
		std::cout << "|";
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << "FIRST NAME";
		std::cout << std::endl;
		while (index <= n)
		{
			print(std::to_string(index));
			std::cout << "|";
			print(contact[index].firstName);
			std::cout << "|";
			print(contact[index].lastName);
			std::cout << "|";
			print(contact[index].nickName);
			std::cout << std::endl;
			index++;
		}
		
	std::cout << "choose an index to display the contact's informations" << std::endl;
	std::cin >> desired_index;
	display_infos(contact,desired_index);
}
