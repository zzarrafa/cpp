/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:57:28 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/10 19:40:08 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n) 
{
    this->N = n;
}
void Span::addNumber(int i)

{
    if (vec.size() < N)
        vec.push_back(i);
    else
        throw FullException();     
}

int Span::shortestSpan()
{

    if (vec.size() <= 1)
        throw NoNumberException();
    sort(vec.begin(), vec.end());
    
    return (vec[1]  - vec.front() );
     
}
int Span::longestSpan()
{

    if (vec.size() <= 1)
        throw NoNumberException();
    sort(vec.begin(), vec.end());
    
    return (vec.back() - vec.front());
    
}

const char	*Span::FullException::what() const throw() 
{
	return ("we are full");
}

const char	*Span::NoNumberException::what() const throw() 
{
	return ("not enough numebrs");
}

