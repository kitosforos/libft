/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:43:48 by maralons          #+#    #+#             */
/*   Updated: 2022/03/24 17:07:40 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char *)str)[i] && i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((unsigned char *)&str[i]);
		i++;
	}
	if (((unsigned char *)str)[i] == c)
		return ((char *)str + i);
	return (0);
}

// int main()
// {
// 	printf("%s\n", ft_memchr("holaquetal", 'a', 9));
// 	printf("%s", memchr("holaquetal", 'a', 9));
// }