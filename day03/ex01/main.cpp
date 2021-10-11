/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:49:27 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/24 18:35:07 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"


int main(void)
{
	ClapTrap ft("FR4GGY",10,30,70);
	ClapTrap ft2(ft);

	for (int i = 0; i < 3; i++)
		ft.takeDamage(20);

	for (int i = 0; i < 3; i++)
		ft.beRepaired(20);

	


	ScavTrap st("pardalis");
	ScavTrap st2(st);

	for (int i = 0; i < 3; i++)
		st.takeDamage(20);

	for (int i = 0; i < 3; i++)
		st.beRepaired(20);

	st.attack("kawkab");
	st.guardGate();
	


}
