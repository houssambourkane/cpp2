/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:03 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:33:05 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zomb;
    Zombie* zomb2;
    zomb.randomChump("cHOMPONZIII");
    zomb2 = zomb.new_Zombie("Chomponzi");
    zomb2->announce();
    delete zomb2;
}