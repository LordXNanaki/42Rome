/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfezzuog <gfezzuog@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:45:34 by gfezzuog          #+#    #+#             */
/*   Updated: 2022/02/03 19:45:34 by gfezzuog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void ft_bzero(void *s, unsigned int n);
int ft_atoi(const char *str);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, unsigned int n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *s, int c);
size_t ft_strlen(char *str);
size_t ft_strlcat(char *dest, char *src, size_t size);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
void	ft_putchar_fd(char c, int fd);
void    *ft_calloc(size_t count, size_t size);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char    *ft_strtrim(char const *s1, char const *set);
void    ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));


#endif
