/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maralons <maralons@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 09:30:20 by maralons          #+#    #+#             */
/*   Updated: 2022/03/24 11:03:43 by maralons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;

	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, ft_strlen(s1) + 1);
	ft_strlcat(str, s2, ft_strlen(s2) + ft_strlen(s1) + 1);
	str[ft_strlen(str)] = 0;
	return (str);
}

// int main()
// {
// 	char *s1 = "where is my ";
// 	char *s2 = "malloc ???";
// 	printf("%s", ft_strjoin(s1, s2));
// }