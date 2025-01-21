/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:42:25 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 13:01:40 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*copia;

	i = 0;
	copia = (char *) malloc (sizeof(char) * (ft_strlen(src) + 1));
	if (!copia)
		return (NULL);
	while (src[i] != '\0')
	{
		copia[i] = src[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
