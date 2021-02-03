/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 20:50:38 by zineb             #+#    #+#             */
/*   Updated: 2021/02/02 22:46:12 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Pony
{
private:
    std::string name;
    std::string color;
public:

    Pony(std::string name,std::string color);
    ~Pony();
    std::string getColor();;
    std::string getName();
};



#endif