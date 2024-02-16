/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:43:12 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/18 10:58:00 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 97) && (str[counter] <= 122))
		{
			str[counter] = str[counter] - 32;
		}
		counter++;
	}
	return (str);
}
/* int     main()
{
	char    r[] = "dasdADJhjc";

	printf("%s\n", r);
	ft_strupcase(r);
	printf("%s\n", r);
	return (0);
} */
