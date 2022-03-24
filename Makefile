CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c  ft_memset.c  ft_strlcat.c ft_strncmp.c ft_tolower.c ft_bzero.c   ft_isalpha.c ft_isprint.c ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_calloc.c  ft_isascii.c ft_memchr.c  ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean:
	rm -rf ${OBJS} ${NAME}

re: clean all

bonus:
