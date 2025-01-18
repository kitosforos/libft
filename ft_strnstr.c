/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:13:24 by maralons          #+#    #+#             */
/*   Updated: 2022/03/23 21:23:38 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	iniciar(size_t *i, size_t *j)
{
	*i = 0;
	*j = 0;
}

void	sumar(size_t *i, size_t *j)
{
	(*i)++;
	(*j)++;
}

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	iniciar(&i, &j);
	if (to_find[0] == 0)
		return (str);
	while (str[j] != 0 && j < n)
	{
		k = 0;
		if (to_find[0] == str[j])
		{
			i = j;
			while (to_find[k] != 0 && to_find[k] == str[i] && i < n)
			{
				if (to_find[k + 1] == '\0')
					return (&str[j]);
				sumar(&i, &k);
			}
		}
		j++;
	}
	return (0);
}
