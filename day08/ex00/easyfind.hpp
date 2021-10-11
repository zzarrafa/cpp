/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:43:01 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/10 18:00:09 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <list>
# include <algorithm>



template<typename T>
void     easyfind(T &a, int b)
{
    typename T::iterator it;
    
    
    it = std::find (a.begin(), a.end(), b);
    if (it != a.end())
    {
        std::cout << "Element " << b <<" found.  \n\n" ;
    }
    else
        std::cout << "Element not found.\n\n";
    
}