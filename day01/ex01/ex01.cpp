/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 22:53:49 by zineb             #+#    #+#             */
/*   Updated: 2021/02/02 22:55:53 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
void memoryLeak()
{
std::string* panther = new std::string("String panther");
std::cout << *panther << std::endl;
delete panther;
}