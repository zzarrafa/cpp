/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 17:45:19 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 16:18:39 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ft("zineb");
	ClapTrap ft2(ft);

	for (int i = 0; i < 5; i++)
		ft.takeDamage(20);

	for (int i = 0; i < 5; i++)
		ft.beRepaired(20);

	ft.attack("zarafa");
	
}