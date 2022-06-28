/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:32:42 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:32:43 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "PhoneBook.hpp"
#include "Contact.hpp"

void start_program(void) {
    PhoneBook pb;

    std::string first_name; 
    std::string last_name;
    std::string nick_name;
    std::string dark_secret;
    std::string number;
    int i = 0;
    int j = 0;
    std::string prompt_string;
    while (true)
    {
        std::cout << "Enter a command : ";
        std::cin >> prompt_string;
        if (prompt_string == "ADD")
        {
            if (i == 8)
                i = 0;
            std::cout << "First name : ";
            std::cin >> first_name;
            std::cout << "Last name : ";
            std::cin >> last_name;
            std::cout << "Nick name : ";
            std::cin >> nick_name;
            std::cout << "Number : ";
            std::cin >> number;
            std::cout << "Dark secret : ";
            std::cin >> dark_secret;
            pb.contacts[i].ADD(first_name, last_name, nick_name, dark_secret, number);
            i++;
        }
        else if (prompt_string ==  "SEARCH")
            pb.SEARCH();
        else if (prompt_string == "EXIT")
            break;
    }
}

int main()
{
    start_program();
}