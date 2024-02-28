NAME = libft.a

MY_SOURCES = ft_isalnum.c \
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
		 main.c

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	cc $(CFLAGS) -o $@ $(MY_OBJECTS)

clean:
	rm -f $(MY_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
