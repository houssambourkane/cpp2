# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 15:33:42 by hbourkan          #+#    #+#              #
#    Updated: 2022/07/05 17:36:27 by hbourkan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp \
			Harl.cpp \
		

COMPILER = g++

all:
	$(COMPILER) $(CPPFILES) -o $(NAME) 

clean:

fclean: clean
	rm $(NAME) 

re: fclean all
	