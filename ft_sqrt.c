/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 16:50:21 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/28 17:04:06 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	num;
	int	result;

	num = 1;
	result = 0;
	while (num <= nb)
	{
		if (num * num == nb)
		{
			result = num;
			break ;
		}
		num++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	int	num;
	int	result;

	num = 16;
	result = ft_sqrt(num);
	if (result != 0) 
	{
		printf("number is : %d\n result is: %d\n", num, result);
	}
	else 
	{
		printf("It an irracional number: %d\n", num);
	}
	return (0);
}*/
