NAME = spooooky_rush

SRC =	main.c\
		src/spooooky_do.c\
		src/spooooky_errors.c\
		src/spooooky_init.c\
		src/spooooky_logic.c\
		src/spooooky_check.c\
		src/spooooky_check_2.c\
		src/spooooky_put.c\
		src/spooooky_free.c

OBJ = $(SRC:.cpp=.o)

CC = clang

FLAGS = -Wall -Werror -Wextra

SANITIZE = -fsanitize=address -g3

INC = -I./includes

all: $(NAME)

$(NAME): $(OBJ)
		$(MAKE) -C ./ft_printf
		cp ft_printf/libftprintf.a .
		$(CC) $(FLAGS) $(SRC) $(SANITIZE) $(INC) libftprintf.a  -o $(NAME)

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
