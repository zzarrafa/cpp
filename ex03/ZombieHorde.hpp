/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:09:25 by zineb             #+#    #+#             */
/*   Updated: 2021/02/05 12:59:43 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include <iomanip>
#include "Zombie.hpp"


class ZombieHorde
{
private:
    static std::string name[10];
    static std::string type[3];
    int nbr;
    Zombie *zombie[];
    
public:
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();
};

#endif
