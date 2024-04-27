# PROJECT NAME #
NAME = 		push_swap
CHECKER =	checker

# DIRS #
LIBFT_DIR =	libft
SRC_DIR =	src
BON_DIR =	bonus

# SRC FILES #
SRC_FLS =	push_swap.c \
				validation.c \
				global_utils.c \
				stack_utils.c \
				stack_init.c \
				swap.c \
				push.c \
				rotate.c \
				reverse_rotate.c \
				sort_stack.c \
				cheapest_number.c \
				cheapest_number_utils.c \
				check_ab.c \
				sort_utils.c \
				rotate_ab.c \
				rotate_ba.c \

BON_FLS =	./bonus/checker.c \
				./bonus/check_stacks.c \
				./src/validation.c \
				./src/global_utils.c \
				./src/stack_utils.c \
				./src/stack_init.c \
				./src/swap.c \
				./src/push.c \
				./src/rotate.c \
				./src/reverse_rotate.c \

# FILEPATHS #
SRCS =		$(addprefix $(SRC_DIR)/,$(SRC_FLS))
OBJS =		$(SRCS:.c=.o)
BOBJS =		$(BON_FLS:.c=.o)

# COMMANDS #
CC = 		cc
CFLAGS =	-Wall -Wextra -Werror
RM =		rm -rf

# RULES #
all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_DIR)/libftprintf.a -o $(NAME)

bonus: $(OBJS) $(BOBJS)
	make -C $(LIBFT_DIR)
	$(CC) $(CFLAGS) $(BOBJS) $(LIBFT_DIR)/libftprintf.a -o $(CHECKER)

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)
	$(RM) $(BOBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(CHECKER)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all bonus clean fclean re
