/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:30:24 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/22 14:08:58 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	c_d;
	unsigned int	c_o;

	c_d = 0;
	c_o = 0;
	while (dest[c_d] != '\0')
	{
		c_d++;
	}
	while (src[c_o] != '\0')
	{
		dest[c_d] = src[c_o];
		c_d++;
		c_o++;
	}
	dest[c_d] = '\0';
	return (dest);
}
