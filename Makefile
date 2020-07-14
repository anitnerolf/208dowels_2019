##
## EPITECH PROJECT, 2020
## 208dowels
## File description:
## makefile
##

SRC	=	src/Main.cpp	\
		src/Dowels.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	208dowels

CFLAGS	=	-Wall -Wextra -Werror

all:		$(NAME) message

$(NAME):	$(OBJ)
		g++ -o $(NAME) $(OBJ) $(CFLAGS) -lm -I ./include

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "Successfully compiled!"
