/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:20:17 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/03 13:52:17 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & new_weapon) {
    this->name = name;
    this->weapon = &new_weapon;
}

HumanA::~HumanA() {
    
}

void HumanA::attack(void) {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}