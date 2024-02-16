/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:18:41 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/16 16:23:13 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c_min;
	int	c_max;
	int	temp;

	c_min = 0;
	c_max = size;
	while (c_min <= size / 2)
	{
		temp = tab[c_min];
		tab[c_min] = tab[c_max - c_min - 1];
		tab[c_max - c_min - 1] = temp;
		c_min++;
	}
}
//int	main()
//{
//	int arr[] = { 1, 23, 14, 12, 9 };
//
//	ft_rev_int_tab(arr, 5);
//	return 0;
//}
