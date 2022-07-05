/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 15:23:38 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/05 17:39:58 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl_inst;
    if (argc == 2)
    {
        std::string complain_level = "DEBUG";
        harl_inst.complain(argv[1]);
    }
    return 0;
}