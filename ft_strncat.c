/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:10:03 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/22 14:11:55 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	c_d;
	unsigned int	c_o;

	c_d = 0;
	c_o = 0;
	while (dest[c_d] != '\0')
		c_d++;
	while (src[c_o] != '\0' && c_o < nb)
	{
		dest[c_d + c_o] = src[c_o];
		c_o++;
	}
	dest[c_d + c_o] = '\0';
	return (dest);
}
