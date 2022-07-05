/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:20:29 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/03 13:57:21 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string first_type) {
    this->type = first_type;
}

Weapon::~Weapon(void) {
    
}

void Weapon::setType(std::string new_type) {
    this->type = new_type;
}

std::string const & Weapon::getType(void){
    return this->type;
}