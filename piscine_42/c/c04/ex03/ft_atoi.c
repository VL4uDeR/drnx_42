/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:06:39 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/29 02:51:20 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	number;

	number = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	number = nb % 10 + '0';
	ft_putchar(number);
}

int	ft_atoi(char *str)
{
	int	minuscount;
	int	nbr;

	minuscount = 0;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\r' || *str == '\n'
		|| *str == '\v' || *str == '\f')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minuscount++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	if (minuscount % 2 == 0)
		return (nbr);
	else
		return (-nbr);
}

int	main(int argc, char **argv)
{
	char	*saludo;

	saludo = "  --+--+-1234567ab567";
	if (argc == 1)
		ft_putnbr(ft_atoi(saludo));
	if (argc == 2)
		ft_putnbr(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
