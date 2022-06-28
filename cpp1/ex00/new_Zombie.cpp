/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_Zombie.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:33:07 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:33:09 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::new_Zombie(std::string name)
{
    Zombie* new_zomb = new Zombie;
    new_zomb->name = name;
    return new_zomb;
}