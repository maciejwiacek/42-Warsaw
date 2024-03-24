NAME = libftprintf.a
LIBFT = libft/

SRCS = src/ft_printf.c \
		src/ft_print_char.c \
		src/ft_print_str.c \
		src/ft_print_int.c \
		src/ft_print_unsigned_int.c \
		src/ft_print_hex.c \
		src/ft_print_pointer.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

makelibft:
	make -C $(LIBFT) bonus
	cp $(LIBFT)libft.a .
	mv libft.a $(NAME)

$(NAME): $(OBJS) | makelibft
	ar rcs $(NAME) $(OBJS)

clean:
	make -C $(LIBFT) clean
	rm -f $(OBJS)

fclean: clean
	make -C $(LIBFT) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all makelibft clean fclean re
