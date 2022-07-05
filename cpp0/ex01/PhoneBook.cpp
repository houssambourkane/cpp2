/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:32:50 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/02 20:31:08 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int PhoneBook::calculate_nb_added(void) {
    int i(0);
    while (i < 8)
    {
        if (this->contacts[i].get_first_name().empty())
            return i;
        i++;
    }
    return 8;
}

void PhoneBook::SEARCH(void) {
    int i = 0;
    std::string index;
    while (true)
    {
        i = 0;
        if (this->calculate_nb_added() == 0)
        {
            std::cout << "The table of indexes is empty" << std::endl;
            return;
        }
        while (i < this->calculate_nb_added())
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
        getline(std::cin, index);
        if (index.length() == 1 && (index[0] - '0' >= 1 && index[0] - '0' <= calculate_nb_added()))
        {
            std::cout << "First name : " << this->contacts[(index[0] - '0') - 1].get_first_name() << std::endl;
            std::cout << "Last name : " << this->contacts[(index[0] - '0') - 1].get_last_name() << std::endl;
            std::cout << "Nick name : " << this->contacts[(index[0] - '0') - 1].get_nick_name() << std::endl;
            std::cout << "Number : " << this->contacts[(index[0] - '0') - 1].get_number() << std::endl;
            std::cout << "Dark secret : " << this->contacts[(index[0] - '0') - 1].get_dark_secret() << std::endl;
            return ;
            
        }
        else
            std::cout << "Invalid index, try another index !" << std::endl;
    }
}
