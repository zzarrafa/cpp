/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 17:57:25 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/11 14:42:55 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <vector>
# include <algorithm>
# include <iostream>




class Span 
{
    private :
        unsigned int N;
        std::vector<int> vec;
        
    public :
        Span(unsigned int n);
        void addNumber(int n);
        class FullException	: public std::exception {
			public:
				virtual const char	*what() const throw();
		};
        class NoNumberException	: public std::exception {
			public:
				virtual const char	*what() const throw();
		};
        int longestSpan();
        int shortestSpan();
        
};
