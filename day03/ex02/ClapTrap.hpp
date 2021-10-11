/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 19:55:56 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/30 10:36:11 by zineb            ###   ########.fr       */
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
		ClapTrap(std::string name,unsigned int Hit_points ,unsigned int Energy_points, unsigned int attack_damage);
		ClapTrap( std::string name);
		ClapTrap(const ClapTrap &cp);
		~ClapTrap(void);
        
		ClapTrap &	operator=(const ClapTrap &rhs);
		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

	
};

#endif 