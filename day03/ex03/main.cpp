/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 19:25:08 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 19:30:45 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{


	ClapTrap Clap("zarafa");

	Clap.attack("zineb");
	Clap.takeDamage(6);
	Clap.beRepaired(8);

	std::cout << "\n\n" << std::endl;

	ScavTrap Scav("HH");

	Scav.attack("zineb");
	Scav.takeDamage(6);
	Scav.beRepaired(8);
	Scav.guardGate();


	std::cout << "\n\n" << std::endl;

	FragTrap Frag("camelo");

	Frag.attack("zineb");
	Frag.takeDamage(6);
	Frag.beRepaired(8);
	Frag.highFivesGuys();

	std::cout << "\n\n" << std::endl;

	DiamondTrap Diamond("zarafa");

	Diamond.attack("zineb");
	Diamond.takeDamage(6);
	Diamond.beRepaired(8);
	Diamond.guardGate();
	Diamond.highFivesGuys();
	Diamond.whoAmI();

	std::cout << "\n\n" << std::endl;

	return 0;
}
