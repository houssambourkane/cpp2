# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:34:10 by hbourkan          #+#    #+#              #
#    Updated: 2022/06/28 15:34:11 by hbourkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp \
		Zombie.cpp \
		new_Zombie.cpp \
		randomChump.cpp \

COMPILER = g++

all:
	$(COMPILER) $(CPPFILES) -o $(NAME) 

clean:

fclean: clean
	rm $(NAME) 

re: fclean all
	