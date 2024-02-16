/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:31:05 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/16 12:07:20 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_putstr(char *str)
{
	unsigned int	r;

	r = 0;
	while (str[r] != '\0')
	{
		r++;
	}
	write(1, str, r);
}
//int	main()
//{
//	char	str[5];
//
//	strcpy(str, "a5ir");
//	ft_putstr(str);
//	return (0);
//}
