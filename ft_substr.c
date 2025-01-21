/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:02:06 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 13:24:57 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	int				i;
	unsigned long	dim;

	if (!s)
		return (NULL);
	dim = ft_strlen(s) - start;
	if (dim < len)
		len = dim;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	str = malloc ((sizeof(char) * len + 1));
	if (!str)
		return (NULL);
	while (i < (int)len && start <= ft_strlen(s))
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}
