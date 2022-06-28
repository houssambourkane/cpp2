/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:49 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:33:50 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zomb;
    Zombie* hordes;

    hordes = zomb.zombieHorde(10 ,"Houssam");
    delete [] hordes;
}