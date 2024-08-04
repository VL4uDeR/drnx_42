/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 01:07:38 by darsalga          #+#    #+#             */
/*   Updated: 2024/08/03 18:17:47 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int	ft_putnbr(int nb)
{
	int	n;

	n = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		n += ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
	{
		n += ft_putnbr(nb / 10);
		n += ft_putnbr(nb % 10);
	}
	else
		n += ft_putchar(nb + '0');
	return (n);
}

int	ft_putunbr(unsigned int nb)
{
	int	n;

	n = 0;
	if (nb > 9)
	{
		n += ft_putunbr(nb / 10);
		n += ft_putunbr(nb % 10);
	}
	else
		n += ft_putchar(nb + '0');
	return (n);
}
