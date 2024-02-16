/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:14:59 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/25 09:18:23 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	else
		return (ft_recursive_factorial(nb - 1) * nb);
}
/*
 // main basico //
int     main()
{
        printf("%d\n", ft_iterative_factorial(5));
//      ft_iterative_factorial(5);
} 
*/
/*
#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
	int	a;

	if (argc < 1)
		return (0);
	a = atoi(argv[1]);
        printf("%d\n", ft_recursive_factorial(a));
} */
