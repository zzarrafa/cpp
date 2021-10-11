/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:57:31 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/11 16:44:22 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


int main()
{
Span sp = Span(5);
try{
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);


std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}
catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}