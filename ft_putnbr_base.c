/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:36:59 by rcosta-c          #+#    #+#             */
/*   Updated: 2024/01/24 16:46:02 by rcosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	find_error(char *base)
{
	int	counter;

	counter = 0;
	while (base[counter] != '\0')
	{
		if (base[counter] == '+' || base[counter] == '-'
			|| base[counter] == base[counter + 1])
			return (0);
		counter++;
	}
	if (counter <= 1)
		return (0);
	return (counter);
}

int	translate_nbr(int nbr, char *base, int ind)
{
	int	numb;
	int	new_numb;

	numb = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	else
		numb = nbr;
	if (numb >= ind)
	{
		translate_nbr((nbr / ind), base, ind);
	}
	new_numb = base[numb % ind];
	write(1, &new_numb, 1);
	return (new_numb);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	ind;

	if ((find_error(base)) == 0)
		return ;
	ind = find_error(base);
	translate_nbr(nbr, base, ind);
}
/*
// Main c funcao atoi para converter valores dados no terminal //

int     ft_atoi(char *str)
{
        int     resultado;
        int     sinal;

        resultado = 0;
        sinal = 1;
        while (*str >= 9 && *str <= 32)
                str++;
        while (*str == '-' || *str == '+')
        {
                if (*str == '-')
                {
                                sinal *= -1;
                }
                str++;
        }
        while (*str >= '0' && *str <= '9')
        {
                resultado = resultado * 10 + *str - '0';
                str++;
        }
        return (resultado * sinal);
}

int	main(int argc, char **argv)
{
	int	r;
	char	*b;

	if (argc < 1)
		return (0);
	r = ft_atoi(argv[1]);
	b = argv[2];
	ft_putnbr_base(r, b);
 }
*//*
teste de int basico a funcionar
int	main()
{
	char	*z = "0123456789ABCDEF";


	ft_putnbr_base(42, "0123456789ABCDEF");
} */
