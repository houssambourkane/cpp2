/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 11:20:31 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/03 13:57:34 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
    public:
        Weapon(std::string first_type);
        ~Weapon(void);
        void setType(std::string new_type);
        std::string const & getType(void);
    private:
        std::string type;
};

#endif