NAME = account

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = tests.cpp Account.cpp

COMPILER = g++

all:
	$(COMPILER) $(CPPFILES) -o $(NAME) 

clean:

fclean: clean
	rm $(NAME) 

re: fclean all
	