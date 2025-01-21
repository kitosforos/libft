/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 18:03:01 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 13:01:29 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int main()
// {
// 	char str[50] = "This is string.h library function\n";
// 	char str2[50] = "This is string.h library function\n";
// 	printf("%s", memset(str, '$', 7));
// 	printf("%s", ft_memset(str2, '$', 0));
// }
