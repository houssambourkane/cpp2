/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:20:19 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/03 13:54:00 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
    public:
        HumanA(std::string name, Weapon & new_weapon);
        ~HumanA();
        void attack(void);
    private:
        std::string name;
        Weapon* weapon;
};

#endif