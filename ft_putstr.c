/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:35:09 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/24 16:24:30 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	write(1, str, counter);
}
/*
int     main()
{
        char    a[] = "OleOleOle";
      strcpy(str, "Ole!Ole!");
        ft_putstr(a);
        return (0);
} */
