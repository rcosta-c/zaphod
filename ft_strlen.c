/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:34:52 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/24 16:19:43 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
/*
#include <string.h>
#include <stdio.h>
int     main()
{
        char    *teste = "blabla";

//	strcpy("letras", teste);
        printf("the number of characters is %d \n",ft_strlen(teste));
        return (0);
} */
