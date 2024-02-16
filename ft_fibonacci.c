/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:31:14 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/25 09:25:19 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	fibo;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (fibo = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (fibo);
}
/*
#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
        int     fib;

	if (argc < 1)
		return(0);
	fib = atoi(argv[1]);
	printf("%d\n", ft_fibonacci(fib));
} */
