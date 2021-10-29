
NAME	= libftprintf.a

MANDATORY	=	ft_printf.c

BONUS	=	ft_printf_bonus.c

SRC		= 	src/get_base.c\
			src/get_flags_list.c\
			src/get_number.c\
			src/get.c\
			src/putchr_c.c\
			src/putstr_c.c\
			src/w_address.c\
			src/w_chr.c\
			src/w_hex_int.c\
			src/w_int.c\
			src/w_string.c\
			src/w_unsint.c\
			src/write_parameters.c

OBJ = $(MANDATORY:.c=.o)

OBJ_1 = $(BONUS:.c=.o)

SRCS = $(SRC:.c=.o)

INC = -I./includes

CC = gcc

FLAGS	= -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) $(SRCS)
		$(MAKE) -C ./libft
		cp libft/libft.a $(NAME)
		$(CC) $(FLAGS) $(INC) $(MANDATORY) $(SRC)
		ar -rcs $(NAME) $(SRCS) $(OBJ)

bonus: $(OBJ_1) $(SRCS)
		$(MAKE) -C ./libft
		cp libft/libft.a $(NAME)
		$(CC) $(FLAGS) $(INC) $(BONUS) $(SRC)
		ar -rcs $(NAME) $(OBJ_1) $(SRCS)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJ)
	rm -rf $(OBJ_1)
	rm -rf $(SRCS)
	rm -rf *.o
	rm -rf a.out

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean bonus re
