/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:37 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:33:54 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)  
{
    int i = 0;
    Zombie* zombies_horde = new Zombie[N];
    
    while (i < N)
        zombies_horde[i++].name = name;
    return zombies_horde;
}