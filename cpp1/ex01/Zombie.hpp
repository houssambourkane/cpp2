/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:31 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:33:57 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
    public:
        void announce(void);   
        Zombie* new_Zombie(std::string name);
        void randomChump(std::string name);
        Zombie* zombieHorde(int N, std::string name);  
    private:
        std::string name;
};

#endif