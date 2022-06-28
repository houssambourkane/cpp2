NAME = phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98

CPPFILES = main.cpp Contact.cpp PhoneBook.cpp

COMPILER = g++

all:
	$(COMPILER) $(CPPFILES) -o $(NAME) 

clean:

fclean: clean
	rm $(NAME) 

re: fclean all
	