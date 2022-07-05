/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:03 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/03 10:59:50 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zomb;
    Zombie* zomb2;
    zomb.randomChump("Houssam");
    zomb2 = zomb.new_Zombie("Chomponzi");
    zomb2->announce();
    delete zomb2;
}