#include <stdio.h>
#include <string.h>
#include <stdlib.h>





NAME = libft.a
SRCS = ft_memset.c ft_strlen.c ft_strncmp.c\
	   ft_memcpy.c ft_memccpy.c ft_bzero.c\
	   ft_memchr.c ft_memcmp.c ft_isalpha.c\
	   ft_isdigit.c ft_isalnum.c ft_isascii.c\
	   ft_isprint.c ft_toupper.c ft_tolower.c\
	   ft_strchr.c ft_strrchr.c ft_memmove.c\
	   ft_strlcpy.c ft_strlcat.c ft_putchar_fd.c\
	   ft_putstr_fd.c ft_putnbr_fd.c ft_strnstr.c\
	   ft_atoi.c ft_putendl_fd.c ft_calloc.c\
	   ft_strdup.c ft_substr.c ft_strjoin.c\
	   ft_strmapi.c ft_itoa.c ft_strtrim.c\
		 ft_split.c ft_lstnew.c ft_lstadd_front.c\
		 ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
		 ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
		 ft_lstmap.c



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





#include "libft.h"

int	ft_atoi(const char *str)
{
	char			*s;
	int				minus;
	int				i;
	unsigned int	res;

	res = 0;
	minus = 1;
	i = 0;
	s = (char *)str;

	while ((*s >= 9 && *s <= 13) || *s == ' ')
		s++;

	while (*s == '-' || *s == '+')
	{
		i++;
		if (i > 1)
			return (0);
		if (*s == '-')
		{
			minus = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - 48);
		s++;
		if (res > 2147483647 && minus == 1)
			return (-1);
		if (res > 2147483648 && minus == -1)
			return (0);
	}
	return (res * minus);
}


static char  **ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_get_numstrs(char const *s, char c)
{
	unsigned int	i; // Счетчик символов
	unsigned int	numstrs; // Счетчик строк

	if (!s[0]) //Если нулевого индекса не существует
		return (0); // Возвращаем 0
	i = 0; // Присваиваем счетчику значение 0
	numstrs = 0; // Присваеиваем переменной "Количество слов 0"
	while (s[i] && s[i] == c) //Пока символ в строке не равен концу строки и символ равен указанному разделителю
		i++; // Увеличиваем счетчик слов на 1
	while (s[i]) //Пока символ в строке не равен концу строки
	{
		if (s[i] == c) // Если символ равен указанному разделителю
		{
			numstrs++; //Увеличиваем счетчик слов на 1
			while (s[i] && s[i] == c) //Пока символ в строке не равен концу строки и символ равен указанному разделителю
				i++; //Увеличиваем счетчик символов на 1
			continue ; // Переходим к циклу 30
		}
		i++; //Увеличиваем счетчик символов на 1
	}
	if (s[i - 1] != c) //Если символ перед концом строки не равен символу разделителя
		numstrs++; //Увеличиваем количество строк на 1
	return (numstrs); //Возвращаем количество строк
}

//Функция подсчета символов в строке
static void			ft_get_lenstr(char **next_str, unsigned int *next_strlen, char c)
{
	unsigned int i; //Счетчик

	*next_str += *next_strlen;
	*next_strlen = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_strlen)++;
		i++;
	}
}

char				**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	numstrs;
	unsigned int	i;

	if (!s) //Если строка существует
		return (NULL);
	numstrs = ft_get_numstrs(s, c); //Вызывает функцию определения количества слов в строке
	if (!(tab = malloc(sizeof(char *) * (numstrs + 1)))) //Выделяем память (количество слов + 1)
		return (NULL); // Проверка выделения памяти
	i = 0; //Присваиваем счетчику значение 0
	next_str = (char *)s; //Присваиваем переменной значение строки переданной в функцию
	next_str_len = 0; //Присваиваем переменной значение 0
	while (i < numstrs) //Пока счетчик меньше чем количество слов
	{
		ft_get_lenstr(&next_str, &next_str_len, c); //Вызываем функцию подсчета символов в строке
		if (!(tab[i] = malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_malloc_error(tab));
		strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}








#include "libft.h"

static char		**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static unsigned int	ft_get_nb_strs(char const *s, char c)
{
	unsigned int	i;
	unsigned int	nb_strs;

	if (!s[0])
		return (0);
	i = 0;
	nb_strs = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nb_strs++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nb_strs++;
	return (nb_strs);
}

static void	ft_get_next_str(char **next_str, unsigned int *next_str_len, char c)
{
	unsigned int i;

	*next_str += *next_str_len;
	*next_str_len = 0;
	i = 0;
	while (**next_str && **next_str == c)
		(*next_str)++;
	while ((*next_str)[i])
	{
		if ((*next_str)[i] == c)
			return ;
		(*next_str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**tab;
	char			*next_str;
	unsigned int	next_str_len;
	unsigned int	nb_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	nb_strs = ft_get_nb_strs(s, c);
	if (!(tab = malloc(sizeof(char *) * (nb_strs + 1))))
		return (NULL);
	i = 0;
	next_str = (char *)s;
	next_str_len = 0;
	while (i < nb_strs)
	{
		ft_get_next_str(&next_str, &next_str_len, c);
		if (!(tab[i] = malloc(sizeof(char) * (next_str_len + 1))))
			return (ft_malloc_error(tab));
		ft_strlcpy(tab[i], next_str, next_str_len + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

int main() {
	char *str = "Hy my";
	printf("Split - %s\n", ft_split(str, ' '));
	return 0;
}
