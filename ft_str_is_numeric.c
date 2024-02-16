/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:27:57 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/18 10:51:50 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	str_is_numeric(char test)
{
	if ((test >= '0') && (test <= '9'))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(str_is_numeric(str[counter])))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/* int     main()
{
        char    r[] = "1230879";

        ft_str_is_numeric(r);
        return (0);
} */
