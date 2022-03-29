/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:48:04 by maralons          #+#    #+#             */
/*   Updated: 2022/03/24 18:54:49 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*aux;
	char	*dest;

	if (!s1 || !set)
		return (NULL);
	aux = malloc(sizeof(char *) * ft_strlen(s1));
	if (!aux)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (is_set(s1[i], set))
		i++;
	while (j > 0)
		aux[k++] = s1[j--];
	while (is_set(aux[j], set))
		j++;
	dest = malloc (sizeof(char *) * (ft_strlen(s1) - i - j) + 1);
	dest = ft_substr(s1, i, ft_strlen(s1) - i - j);
	return (dest);
}

// int main()
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
// 	printf("%s", ft_strtrim(s1, " \n\t"));
// }