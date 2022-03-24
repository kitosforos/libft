/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:58:10 by maralons          #+#    #+#             */
/*   Updated: 2022/03/24 11:18:10 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**splited;
	int		k;
	int		j;
	char	*str = c;

	i = 0;
	j = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	splited = (char **)malloc(sizeof(char *) * (count + 1));
	i = 0;
	if (count == 0)
	{
		splited[0] = malloc (sizeof(char) * ft_strtrim(s, str));
		splited[0] = ft_strtrim(s, str);
	}
	while (s[i])
	{
		if (s[i] == c)
		{
			splited[j] = malloc (sizeof(char) * k + 1);
			splited[j] = ft_substr(s, i - k, k);
			k = -1;
			j++;
		}
		i++;
		k++;
	}
	return (splited);
}
