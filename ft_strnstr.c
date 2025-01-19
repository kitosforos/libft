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

char	*ft_strnstr(char *str, char *to_find, size_t n)
{
	size_t	i;
	size_t	k;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0 && i < n)
	{
		k = 0;
		if (to_find[0] == str[i])
		{
			while (to_find[k] != 0 && to_find[k] == str[i] && i < n)
			{
				if (to_find[k + 1] == '\0')
					return (&str[i - k]);
				i++;
				k++;
			}
			i -= k;
		}
		i++;
	}
	return (0);
}
