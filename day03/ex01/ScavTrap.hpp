/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 21:16:12 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/24 18:11:10 by zineb            ###   ########.fr       */
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
        void attack(std::string const & target);
        void guardGate();
        ScavTrap& operator=(ScavTrap& other);
        ScavTrap(const ScavTrap &cp);
        
};

#endif