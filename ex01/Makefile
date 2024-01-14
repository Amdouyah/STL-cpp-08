NAME = Span

CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Span.hpp
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
clean :
	@rm -rf $(OBJ)
fclean : clean 
	@rm -rf $(NAME)
re : fclean all

