/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:29:13 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/18 10:53:36 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_is_lowcase(char test)
{
	if ((test >= 'a') && (test <= 'z'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str_is_lowcase(str[counter])))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/*
int     main()
{
        char    r[] = "dasdhjc";

        ft_str_is_lowercase(r);
        return (0);
}
*/
