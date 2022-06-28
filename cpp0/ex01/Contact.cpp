/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:32:31 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:32:33 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <cstring>

Contact::Contact() {
    // std::cout << "Phonebook constructed" << std::endl;
}

Contact::~Contact() {
    // std::cout << "Phonebook destructed" << std::endl;
}

void Contact::ADD(std::string first_name, std::string last_name, std::string nick_name, std::string dark_secret, std::string number) {
    this->_first_name = first_name;
    this->_last_name = last_name;
    this->_nick_name = nick_name;
    this->_dark_secret = dark_secret;
    this->_number = number;
}

std::string Contact::get_first_name(void) {
    return this->_first_name;
}

std::string Contact::get_last_name(void) {
    return this->_last_name;
}

std::string Contact::get_nick_name(void) {
    return this->_nick_name;
}

std::string Contact::get_number(void) {
    return this->_number;
}

std::string Contact::get_dark_secret(void) {
    return this->_dark_secret;
}

