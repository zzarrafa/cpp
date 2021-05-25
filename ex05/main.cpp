/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 13:26:22 by zineb             #+#    #+#             */
/*   Updated: 2021/03/09 13:26:24 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main(void)
{
	Human bob;

	std::cout << "Bob identify: \t" << bob.identify() << std::endl;
	std::cout << "Brain identify: " << bob.getBrain().identify() << std::endl;
	return (0);
}