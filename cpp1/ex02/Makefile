# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:33:42 by hbourkan          #+#    #+#              #
#    Updated: 2022/07/03 11:08:00 by hbourkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp \

COMPILER = g++

all:
	$(COMPILER) $(CPPFILES) -o $(NAME) 

clean:

fclean: clean
	rm $(NAME) 

re: fclean all
	