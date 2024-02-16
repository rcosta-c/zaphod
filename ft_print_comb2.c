/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:18:39 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/30 11:28:53 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(int x)
{
	int	mod;
	int	ext;
	int	div;

	ext = x + 48;
	mod = x % 10;
	div = x / 10;
	if (x <= 9)
	{
		write(1, &ext, 1);
	}
	else
	{
		printer(div);
		printer(mod);
	}
}

void	ft_print_comb2(void)
{
	int	c1;
	int	c2;

	c1 = 0;
	while (c1 <= 98)
	{
		c2 = c1 + 1;
		while (c2 <= 99)
		{
			if (c1 >= 0 && c1 <= 9)
				write(1, "0", 1);
			printer(c1);
			write(1, " ", 1);
			if (c2 >= 0 && c2 <= 9)
				write(1, "0", 1);
			printer(c2);
			c2++;
			if (!(c1 > 97 && c2 > 98))
				write(1, ", ", 2);
		}
		c1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
} */
