/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:37:56 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/18 09:38:22 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0' && counter < n)
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
/* int	main(void)
{
	char	o[] = "1234" ;
	char	d[4];
	int	a;

	a = 3;

	printf("valor orig. antes da funcao: %s\n", o);
        printf("valor dest. antes da funcao: %s\n", o);
	ft_strncpy(d, o, a);
        printf("valor orig depois da funcao: %s\n", o);
	printf("valor dest depois da funcao: %s\n", d);
	return (0);
} */
