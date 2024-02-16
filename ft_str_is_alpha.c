/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:25:40 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/18 09:37:15 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_is_alpha(char test)
{
	if ((test >= 'a') && (test <= 'z'))
	{
		return (1);
	}
	if ((test >= 'A') && (test <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str_is_alpha(str[counter])))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/*
int	main()
{
	char	r[] = "pikasAZau";

	ft_str_is_alpha(r);
	return (0);
}
*/
