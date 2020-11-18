/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:20:00 by bakali            #+#    #+#             */
/*   Updated: 2020/11/12 11:05:46 by bakali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *buf, char z, size_t bytes);
size_t	ft_strlen (const char *str);
char	*ft_strchr(const char *s, int c);
int		ft_strncmp(const char* str1, const char* str2, size_t n);
void	*ft_memcpy (void *destination, const void *source, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memchr (const void* s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t siz);
size_t	ft_strlcat (char *dst, const char *src, size_t size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strnstr(const char *s, const char *find, size_t slen);
int		ft_atoi(const char *str);
void	ft_putendl_fd(char *s, int fd);
void	*ft_calloc(size_t count, size_t size);

#endif
