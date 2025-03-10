/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcoalo <marcoalo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:09:23 by maralons          #+#    #+#             */
/*   Updated: 2025/01/21 13:00:49 by marcoalo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	signo;
	int	numero;

	i = 0;
	signo = 1;
	numero = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signo *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		numero = numero * 10 + (str[i] - '0');
		i++;
	}
	if (signo < 0)
		return (-1 * numero);
	else
		return (numero);
}

// int main() {
// 	printf("%d\n", atoi("     3747"));
// 	printf("%d\n", ft_atoi("     3747"));
// }