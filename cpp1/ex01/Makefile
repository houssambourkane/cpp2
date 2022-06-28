# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:33:42 by hbourkan          #+#    #+#              #
#    Updated: 2022/06/28 15:33:43 by hbourkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hordes

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp \

COMPILER = g++

all:
	$(COMPILER) $(CPPFILES) -o $(NAME) 

clean:

fclean: clean
	rm $(NAME) 

re: fclean all
	