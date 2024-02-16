/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 09:04:49 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/30 11:40:36 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_count(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

int	ft_lngh(char **strs, int size, char *sep)
{
	int	counter;
	int	lngh;

	counter = 0;
	lngh = 0;
	while (counter < size)
	{
		lngh += str_count(strs[counter]);
		counter++;
	}
	lngh += (size - 1) * str_count(sep) + 1;
	return (lngh);
}

char	*ft_strcat(char *dest, char *src)
{
	int	c_s;
	int	c_d;

	c_s = 0;
	c_d = 0;
	while (dest[c_s])
		c_s++;
	while (src[c_d])
	{
		dest[c_s + c_d] = src[c_d];
		c_d++;
	}
	dest[c_s + c_d] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		counter;
	char	*str;

	if (size == 0)
	{
		str = malloc(sizeof(char));
		*str = 0;
		return (str);
	}
	str = malloc(sizeof(char) * ft_lngh(strs, size, sep));
	if (!(str))
		return (NULL);
	*str = 0;
	counter = 0;
	while (counter < size)
	{
		ft_strcat(str, strs[counter]);
		if (counter < size - 1)
			ft_strcat(str, sep);
		counter++;
	}
	return (str);
}
