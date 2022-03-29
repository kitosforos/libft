/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:58:10 by maralons          #+#    #+#             */
/*   Updated: 2022/03/29 19:30:37 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countwords(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			cnt++;
		while (s[i] != c && s[i])
			i++;
	}
	return (cnt);
}

char	*setword(const char *s, size_t size)
{
	char	*str;

	str = malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, size + 1);
	str[size] = 0;
	return (str);
}

void	inicia(int *i, int *j)
{
	*i = 0;
	*j = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	inicia(&i, &j);
	tab = malloc(sizeof(char *) * (countwords(s, c) + 2));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] != c && s[i])
			i++;
		if (i > k)
			tab[j++] = setword(s + k, i - k);
	}
	tab[j] = NULL;
	return (tab);
}

// int main()
// {
// 	char *string = "      split       this    for   me  !       ";
// 	char **tab;
// 	tab = ft_split(string, ' ');
// 	for(int i = 0; i < 5; i++)
// 		printf("%s\n", tab[i]);
// }