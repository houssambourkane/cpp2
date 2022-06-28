/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:32:55 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:32:57 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iostream>

class PhoneBook {
    public :
        PhoneBook(void);
        ~PhoneBook(void);
        void SEARCH(void);
        Contact contacts[8];
};

#endif