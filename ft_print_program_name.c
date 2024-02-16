/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 09:31:47 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/25 09:33:24 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char x)
{
	write(1, &x, 1);
}

int	main(int argc, char **argv)
{
	int	counter;

	counter = 0;
	if (argc > 0)
	{
		while (argv[0][counter] != '\0')
		{
			ft_print_params(argv[0][counter]);
			counter++;
		}
		ft_print_params('\n');
	}
}
