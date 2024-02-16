/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 08:59:10 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/30 08:58:24 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	counter;
	unsigned int	count;
	char			*dest;

	counter = 0;
	count = 0;
	while (src[counter] != '\0')
		counter++;
	dest = (char *)malloc(sizeof(char) * counter);
	if (!(dest))
		return (NULL);
	while (src[count] != '\0')
	{
		dest[count] = src [count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
