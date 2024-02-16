/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:21:09 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/16 12:32:52 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	cg;
	int	cp;

	cg = 1;
	while (cg < size)
	{
		cp = cg;
		while (cp > 0 && *(tab + cp - 1) > *(tab + cp))
		{
			ft_swap(tab + cp, tab + cp - 1);
			cp--;
		}
		cg++;
	}
}
//	for(loop = 0; loop < size; loop++)
//	{
//	printf("%d ",tab[loop]);
//	}
//	printf("\n");
//
//int	main(void)
//{
//	int	arr[] = {7, 23, 16, 0, 2, 9};
//	
//	ft_sort_int_tab(arr, 5);
//	return (0);
//}
