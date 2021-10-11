/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 15:45:01 by zineb             #+#    #+#             */
/*   Updated: 2021/06/21 15:54:14 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << " * Creation" << std::endl;
	Bureaucrat b("Bob", 42);
	std::cout << b << std::endl;

	
	std::cout << " * Too low grade" << std::endl;
	try {
		Bureaucrat bLow("Alice", 420);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what()  << std::endl;
	}

	std::cout << " * Too high" << std::endl;
	try {
		Bureaucrat bHigh("Peter", -5);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << " * Increment" << std::endl;
	try {
		while (true)
		{
			b.increment();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	std::cout << " * Decrement" << std::endl;
	try {
		while (true)
		{
			b.deccrement();
			std::cout << b.getGrade() << ", ";
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
}