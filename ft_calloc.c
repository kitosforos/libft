/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 08:44:14 by maralons          #+#    #+#             */
/*   Updated: 2022/03/24 08:56:55 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*item;
	size_t	i;

	i = 0;
	item = malloc(nitems * size);
	if (!item)
		return (NULL);
	while (i < (nitems * size))
	{
		((unsigned char *)item)[i] = 0;
		i++;
	}
	return (item);
}
