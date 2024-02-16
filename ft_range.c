/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:00:14 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/30 11:33:48 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	unsigned int	counter;
	int				*group;

	counter = 0;
	if (min >= max)
		return (NULL);
	group = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		group[counter] = min;
		min++;
		counter++;
	}
	return (group);
}
