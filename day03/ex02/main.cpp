/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 16:46:25 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 17:08:13 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap ft("camelo");

	for (int i = 0; i < 3; i++)
		ft.takeDamage(20);

	for (int i = 0; i < 3; i++)
		ft.beRepaired(20);


	ft.attack("zarafa");
	ft.highFivesGuys();



	ScavTrap st("hh");

	for (int i = 0; i < 3; i++)
		st.takeDamage(20);

	for (int i = 0; i < 3; i++)
		st.beRepaired(20);


}
