/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:38:58 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/24 16:27:04 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	resultado;
	int	sinal;

	resultado = 0;
	sinal = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sinal *= -1;
		}
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		resultado *= 10;
		resultado += *str - 48;
		str++;
	}
	return (resultado * sinal);
}
/*
#include <stdio.h>

int	main()
{
	char	*a;

	a = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(a));
	return (0);

} */
