/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:32:50 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:32:52 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

PhoneBook::PhoneBook() {
    // std::cout << "Phonebook constructed" << std::endl;
}

PhoneBook::~PhoneBook() {
    // std::cout << "Phonebook destructed" << std::endl;
}

void PhoneBook::SEARCH(void) {
    int i = 0;
    int index = 0;
    while (true)
    {
        i = 0;
        while (i < 8)
        {
            std::cout << i + 1;
            std::cout << "|";
            if (this->contacts[i].get_first_name().size() < 10)
                std::cout << this->contacts[i].get_first_name();
            else
            {
                std::cout << this->contacts[i].get_first_name().substr(0, 9);
                std::cout << ".";
            }
            std::cout << "|";
            if (this->contacts[i].get_last_name().size() < 10)
                std::cout << this->contacts[i].get_last_name();
            else
            {
                std::cout << this->contacts[i].get_last_name().substr(0, 9);
                std::cout << ".";
            }
            std::cout << "|";
            if (this->contacts[i].get_nick_name().size() < 10)
                std::cout << this->contacts[i].get_nick_name();
            else
            {
                std::cout << this->contacts[i].get_nick_name().substr(0, 9);
                std::cout << ".";
            }
            std::cout << std::endl;
            i++;
        }
        std::cout << std::endl << "Choose an index : ";
        std::cin >> index;
        if (!(index >= 1 && index <= 8))
        {
            std::cout << "Invalid index" << std::endl;
            return;
        }
        else
        {
            std::cout << "First name : " << this->contacts[index - 1].get_first_name() << std::endl;
            std::cout << "Last name : " << this->contacts[index - 1].get_last_name() << std::endl;
            std::cout << "Nick name : " << this->contacts[index - 1].get_nick_name() << std::endl;
            std::cout << "Number : " << this->contacts[index - 1].get_number() << std::endl;
            std::cout << "Dark secret : " << this->contacts[index - 1].get_dark_secret() << std::endl;
            return ;
        }
    }
}
