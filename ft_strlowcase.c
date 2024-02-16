/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:44:02 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/18 10:58:31 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if ((str[counter] >= 65) && (str[counter] <= 90))
		{
			str[counter] = str[counter] + 32;
		}
		counter++;
	}
	return (str);
}
/* int     main()
{
        char    r[] = "dasdADJhjc";

        printf("%s\n", r);
        ft_strlowcase(r);
        printf("%s\n", r);
        return (0);
} */
