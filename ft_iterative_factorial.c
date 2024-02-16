/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:57:42 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/25 09:17:14 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (x);
	while (nb > 0)
	{
		x *= nb;
		nb--;
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
	int	a;

	if (argc < 1)
		return (0);
	a = atoi(argv[1]);
	printf("%d\n", ft_iterative_factorial(a));
} */
