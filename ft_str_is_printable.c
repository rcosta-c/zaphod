/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:39:07 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/19 10:05:35 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print_is_ok(char test)
{
	if ((test >= 32) && (test <= 126))
	{
		return (1);
	}
	return (0);
}

int	ft_str_is_printable(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!(print_is_ok(str[counter])))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}
/* int     main()
{
        char    r[] = "dasdADJ345019JD,.:hjc";

        ft_str_is_printable(r);
        return (0);
} */
