# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:33:42 by hbourkan          #+#    #+#              #
#    Updated: 2022/07/05 15:09:49 by hbourkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = desed

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

CPPFILES = main.cpp \
		

COMPILER = g++

all:
	$(COMPILER) $(CPPFILES) -o $(NAME) 

clean:

fclean: clean
	rm $(NAME) 

re: fclean all
	