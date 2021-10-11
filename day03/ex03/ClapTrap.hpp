/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:55:56 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 19:33:19 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_H
# define CLAPTRAP_CLASS_H

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
        ClapTrap();
		ClapTrap(const std::string name,unsigned int Hit_points,unsigned int Energy_points,unsigned int attack_damage);
         ClapTrap( std::string name);
		ClapTrap(const ClapTrap &cp);
		~ClapTrap(void);

		ClapTrap &	operator=(const ClapTrap &rhs);

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		

	
};

#endif 