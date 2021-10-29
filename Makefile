NAME = spooooky_rush

SRC =	main.c

OBJ = $(SRC:.cpp=.o)

CC = clang

#FLAGS = -Wall -Werror -Wextra

SANITIZE = -fsanitize=address -g3

INC = -I./includes

all: $(NAME)

$(NAME): $(OBJ)
		$(MAKE) -C ./ft_printf
		cp ft_printf/libftprintf.a .
		$(CC) $(FLAGS) $(SRC) $(INC) libftprintf.a $(SANITIZE) -o $(NAME)

clean:
	$(MAKE) clean -C ./ft_printf
	rm -rf *.o
	rm -rf a.out
	rm -rf a.out*

fclean: clean
	$(MAKE) fclean -C ./ft_printf
	rm -f *.a
	rm -rf $(NAME)
	rm -rf $(NAME).dSYM

re: fclean all

.PHONY:	all clean fclean re
