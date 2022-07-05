/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:32:42 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/02 20:09:49 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void start_program(void) 
{
    PhoneBook pb;
    std::string first_name, last_name, nick_name, dark_secret, number, prompt_string; 
    int i = 0, j = 0;
    while (true)
    {
        std::cout << "Enter a command : ";
        getline(std::cin, prompt_string);
        if (prompt_string == "ADD")
        {
            if (i == 8)
                i = 0;
            std::cout << "First name : ";
            getline(std::cin, first_name);
            std::cout << "Last name : ";
            getline(std::cin, last_name);
            std::cout << "Nick name : ";
            getline(std::cin, nick_name);
            std::cout << "Number : ";
            getline(std::cin, number);
            std::cout << "Dark secret : ";
            getline(std::cin, dark_secret);
            if (first_name.empty() || last_name.empty() || nick_name.empty() || number.empty() || dark_secret.empty())
            {
                std::cout << "Empty field, try again" << std::endl;
                continue;
            }
            pb.contacts[i].ADD(first_name, last_name, nick_name, dark_secret, number);
            std::cout << first_name << " " << last_name << " added" << std::endl;
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