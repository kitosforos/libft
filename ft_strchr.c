/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:28:23 by maralons          #+#    #+#             */
/*   Updated: 2022/03/23 20:57:50 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == c)
		return ((char *)str + i);
	return (NULL);
}

//  int main()
//  {
// 	printf("%s", ft_strchr("holaquetal", '\0'));
// }