/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:32:36 by hbourkan          #+#    #+#             */
/*   Updated: 2022/06/28 15:32:38 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact {
    public:
        Contact();
        ~Contact();
        
        void ADD(std::string first_name, std::string last_name, std::string nick_name, std::string dark_secret, std::string number);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nick_name(void);
        std::string get_number(void);
        std::string get_dark_secret(void);
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nick_name;
        std::string _number;
        std::string _dark_secret;
};

#endif