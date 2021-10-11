/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:16:12 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 17:04:00 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
   
    public:
        
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &cp);
        ScavTrap& operator=(ScavTrap& other);
        void attack(std::string const &target);
        void guardGate();
        
     
        
};

#endif