/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:45:12 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/03 16:21:21 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
#include <iostream>

class ClapTrap 
{
    protected:
		std::string		name;
		unsigned int Hit_points ;
        unsigned int Energy_points ;
        unsigned int attack_damage;
        

	public:
		ClapTrap(const std::string name,unsigned int Hit_points,unsigned int Energy_points,unsigned int attack_damage);
		ClapTrap(const ClapTrap &cp);
		~ClapTrap(void);
		ClapTrap(const std::string name);

		ClapTrap &	operator=(const ClapTrap &rhs);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		

};
