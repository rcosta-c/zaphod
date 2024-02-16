/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 10:20:13 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/22 14:06:18 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
		counter++;
	if (s1[counter] == s2[counter])
		return (0);
	else
		return (s1[counter] - s2[counter]);
}
