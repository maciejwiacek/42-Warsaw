# PROJECT NAME #
NAME = 		push_swap

# DIRS #
LIBFT_DIR =	libft
SRC_DIR =	src

# SRC FILES #
SRC_FLS =	list_utils.c \
				push_swap.c \
				validation.c \
				global_utils.c \
				stack_init.c \
				swap.c \
				push.c \
				rotate.c \

# FILEPATHS #
SRCS =		$(addprefix $(SRC_DIR)/,$(SRC_FLS))
OBJS =		$(SRCS:.c=.o)

# COMMANDS #
CC = 		gcc
CFLAGS =	-Wall -Wextra -Werror
RM =		rm -rf

# RULES #
all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_DIR)/libftprintf.a -o $(NAME)

clean:
	make -C $(LIBFT_DIR) fclean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re