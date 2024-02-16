/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:00:56 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/30 09:01:33 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*group;
	int	counter;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	group = (int *)malloc(sizeof(int) * (max - min));
	if (group == NULL)
		return (-1);
	else
	{
		counter = 0;
		while (min < max)
		{
			group[counter] = min;
			min++;
			counter++;
		}
		*range = group;
		return (counter);
	}
}
