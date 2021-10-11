/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:42:58 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/11 16:43:39 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int     main( void )
{
    std::list<int> lst;
    lst.push_back(1);
    lst.push_back(18);
    lst.push_back(21);
    lst.push_back(150);
    easyfind(lst, 150);
    easyfind(lst, 2);
}