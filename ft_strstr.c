/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:31:42 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/22 11:32:50 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	c_p;
	unsigned int	c_g;

	c_g = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[c_g] != '\0')
	{
		c_p = 0;
		while (str[c_g + c_p] == to_find[c_p])
		{
			if (to_find[c_p + 1] == '\0')
			{
				return (str + c_g);
			}
			c_p++;
		}
		c_g++;
	}
	return (0);
}
