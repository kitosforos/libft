/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:54:44 by maralons          #+#    #+#             */
/*   Updated: 2022/03/23 21:36:37 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	buf[2024];

	i = 0;
	while (i < n)
	{
		buf[i] = ((unsigned char *)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = buf[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char str[50] = "This is string.h library function\n";
// 	char str2[50] = "This is string.h library function\n";
// 	char str3[50] = "IMBECIL";
// 	char str4[50] = "IMBECIL";
// 	printf("%s\n", memmove(str, str3, 3));
// 	printf("%s\n", ft_memmove(str2, str4, 3));
// }
