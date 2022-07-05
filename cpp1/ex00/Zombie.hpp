/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:20 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/03 10:57:35 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
    public:
        Zombie(void);
        ~Zombie(void);
        void announce(void);   
        Zombie* new_Zombie(std::string name);
        void randomChump(std::string name);   
    private:
        std::string name;
};

#endif