SRCS = ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_memset.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strncmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_strlcat.c \
       ft_strnstr.c \
       ft_atoi.c \
       ft_bzero.c \
       ft_strchr.c \
       ft_tolower.c \
       ft_toupper.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_calloc.c \
       ft_strdup.c \
       ft_substr.c \
       ft_strjoin.c \
       ft_strtrim.c \
       ft_split.c \
       ft_putchar_fd.c \
       ft_putstr_fd.c \
       ft_putendl_fd.c \
       ft_strmapi.c \
       ft_strrchr.c \
       ft_striteri.c \
       ft_putnbr_fd.c \
       ft_itoa.c

BONSRCS =	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c


OBJS = $(SRCS:.c=.o)
BONOBJS = $(BONSRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONOBJS)
	ar rcs $(NAME) $?

clean:
	rm -f $(OBJS) $(BONOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
