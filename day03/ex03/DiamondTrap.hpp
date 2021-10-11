/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 17:13:30 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/06/14 19:05:41 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_CLASS_H
# define DIAMONDTRAP_CLASS_H

# include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public  FragTrap , public ScavTrap
{
    private :
        std::string name;
    public :
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &cp);
        DiamondTrap & operator=(const DiamondTrap &rhs);
        void attack(std::string const & target);
        void whoAmI();
};

#endif
