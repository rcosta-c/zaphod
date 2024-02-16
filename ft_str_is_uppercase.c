/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:30:01 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/18 10:55:24 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_is_upcase(char test)
{
	if (!((test >= 'A') && (test <= 'Z')))
	{
		return (0);
	}
	return (1);
}

int	ft_str_is_uppercase(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str_is_upcase(str[counter])))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/* int     main()
{
        char    r[] = "DAJHDASD";

        ft_str_is_uppercase(r);
        return (0);
} */
