/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 19:04:07 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 13:01:18 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
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
// 	printf("%s\n", memcpy(str, str3, 3));
// 	printf("%s", ft_memcpy(str2, str4, 3));
// }
