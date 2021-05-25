/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 23:24:09 by zineb             #+#    #+#             */
/*   Updated: 2021/02/05 12:55:06 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Zombie
{
private:
    std::string name;
    std::string type;
    
public:
    Zombie(std::string name,std::string type);    
    Zombie();
    ~Zombie();
    void announce();
    std::string getname();
    std::string gettype();
    
    

};





#endif