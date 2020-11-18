NAME = libft.a
SRCS = ft_memset.c
OBJS = ${SRCS:.c=.o}
HEADER = libft.h
CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -c

all: ${NAME}

${NAME}: ${OBJS}
    ar -rc ${NAME} ${OBJS}
    ranlib ${NAME}

${OBJS}: ${SRCS} ${HEADER}
    ${CC} ${CFLAGS} ${SRCS} ${HEADER}

clean:
    ${RM} ${OBJS]}

fclean:
    ${RM} ${NAME}

re: fclean all
