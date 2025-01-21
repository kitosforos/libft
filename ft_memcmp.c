/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:22:32 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 13:03:57 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)str1)[i] == ((unsigned char *)str2)[i]
		&& i < (n - 1))
		i++;
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
