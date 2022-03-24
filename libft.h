/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:58:10 by maralons          #+#    #+#             */
/*   Updated: 2022/03/24 11:11:17 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>

int				ft_isalpha(int c);

int				ft_isdigit(int c);

int				ft_isalnum(int c);

int				ft_isascii(int c);

int				ft_isprint(int c);

unsigned long	ft_strlen(const char *s);

void			*ft_memset(void *str, int c, size_t n);

int				ft_tolower(int c);

int				ft_toupper(int c);

void			ft_bzero(void *s, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

int				ft_atoi(const char *str);

char			*ft_strchr(const char *str, int c);

char			*ft_strrchr(const char *str, int c);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

int				ft_memcmp(const void *str1, const void *str2, size_t n);

char			*ft_strnstr(char *str, char *to_find, size_t n);

size_t			ft_strlcat(char *dest, const char *src, size_t destsize);

void			*ft_memchr(const void *str, int c, size_t n);

char			*ft_strdup(const char *src);

void			*ft_calloc(size_t nitems, size_t size);

char			*ft_substr(char const *s, unsigned int start, size_t len);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s1, char const *set);

char			**ft_split(char const *s, char c);
#endif