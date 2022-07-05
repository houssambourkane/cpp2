/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 13:58:46 by hbourkan          #+#    #+#             */
/*   Updated: 2022/07/05 21:27:02 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
std::string ft_replace(std::string infile, std::string s1, std::string s2)
{
    std::string str;
    std::size_t position = 0;
    int i = 0;
    
    while (true)
    {
        position = infile.find(s1);
        if (position == std::string::npos)
        {
            str += infile;
            break;
        }
        i += position;
        str += infile.substr(0, position);
        str.insert(i, s2);
        i += s2.length();
        infile = infile.substr(position + s1.length(), infile.length());
    }
    return str;
}

int main(int argc, char **argv)
{
    std::ofstream out_file;
    std::ifstream in_file;
    std::string buffer;
    std::string infile;
    
    if (argc == 4)
    {
        in_file.open(argv[1]);
        if (in_file.fail())
        {
            std::cout << "Failed to open";
            return 0;
        }
        out_file.open((std::string)argv[1] + ".replace");
        if (out_file.fail())
        {
            std::cout << "Failed to open";
            return 0;
        }
        while (getline(in_file, buffer))
        {
            infile += buffer;
            infile += "\n";
        }
        buffer = ft_replace(infile, (std::string)argv[2], (std::string)argv[3]);
        out_file << buffer;
    }
    return 0;
}