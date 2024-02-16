/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:18:57 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/25 09:19:45 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		x *= nb;
		power--;
	}
	return (x);
}

/* 
 // main basico //
int	main()
{
	printf("%d\n", ft_iterative_factorial(5));
//	ft_iterative_factorial(5);
}
*/
/*
// main com introducao de dados a partir do terminal // 
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	base;
	int	potencia;

	if (argc < 1)
		return (0);
	base = atoi(argv[1]);
	potencia = atoi(argv[2]);
	printf("%d\n", ft_iterative_power(base, potencia));
} */
