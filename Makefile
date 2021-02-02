##
## Personal Project
## Connect 4
## File description:
## Makefile
##

SRC	=	main.cpp	\
		$(wildcard src/*.cpp)

CXXFLAGS	=	-I./include -Wall -Wextra -Werror

LDFLAGS		=	-lsfml-graphics -lsfml-window -lsfml-system

OBJ	=	$(SRC:.cpp=.o)

NAME	=	myConnectFour

all: $(NAME)

$(NAME):	$(OBJ)
	g++ -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)
	rm -f $(NAME)

re: all clean

.PHONY: all clean fclean re