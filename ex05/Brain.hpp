/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zineb <zineb@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:21:45 by zineb             #+#    #+#             */
/*   Updated: 2021/03/09 13:23:45 by zineb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
# include <iomanip>


class Brain
{
private:
    int iq_level;
public:
    Brain(int iq_level);
    ~Brain();
    std::string identify() const;
    int get_IQ();
    
};





#endif