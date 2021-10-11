/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzarrafa <zzarrafa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:45:12 by zzarrafa          #+#    #+#             */
/*   Updated: 2021/07/09 17:00:08 by zzarrafa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_H
# define FRAGTRAP_CLASS_H

# include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &cp);
		~FragTrap(void);
		FragTrap &	operator=(const FragTrap &rhs);
		void highFivesGuys(void);
};

#endif 