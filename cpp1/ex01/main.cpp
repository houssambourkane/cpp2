/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:49 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/03 11:08:10 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zomb;
    Zombie* hordes;
    int N(5);

    hordes = zomb.zombieHorde(N ,"Houssam");
    for (int i(0) ; i < N; i++)
        hordes[i].announce();
    delete [] hordes;
}