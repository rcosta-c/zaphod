/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:22:13 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/25 09:24:36 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
/*
 //  main basico //
int     main()
{
        printf("%d", ft_iterative_power(2, 5));
}*/
/*
// main com argv //
#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
        int     base;
	int	potencia;

        if (argc < 1)
		return (0);
	base = atoi(argv[1]);
	potencia = atoi(argv[2]);
        printf("%d\n", ft_recursive_power(base, potencia));
} */
