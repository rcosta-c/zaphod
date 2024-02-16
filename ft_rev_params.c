/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:39:30 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/25 11:17:57 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char x)
{
	write(1, &x, 1);
}

int	main(int argc, char **argv)
{
	int	c_a;
	int	c;

	c_a = argc - 1;
	if (argc > 1)
	{
		while (c_a > 0)
		{
			c = 0;
			while (argv[c_a][c] != '\0')
			{
				ft_print_params(argv[c_a][c]);
				c++;
			}
			c_a--;
			ft_print_params('\n');
		}
	}
	return (0);
}
