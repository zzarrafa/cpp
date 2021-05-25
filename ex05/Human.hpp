/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:21:55 by zineb             #+#    #+#             */
/*   Updated: 2021/03/09 13:21:55 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include <iostream>
# include <iomanip>
#include "Brain.hpp"

class Human
{
private:
   const Brain brain ;
public:
    Human(/* args */);
    ~Human();
    const Brain	&getBrain(void);
    std::string	identify(void) const;
};






#endif