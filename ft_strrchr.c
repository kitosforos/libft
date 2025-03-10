/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:49:11 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 13:04:42 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (str[i])
	{
		k = 0;
		if (str[i] == (char)c)
		{
			k = i + 1;
			while (str[k] != (char)c)
			{
				if (!str[k])
					return ((char *)&str[i]);
				k++;
			}
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return (NULL);
}

// int main()
// {
// 	printf("%s", ft_strrchr("holaquetal", 'e'));
// }
