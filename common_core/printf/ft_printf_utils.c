/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 01:07:38 by darsalga          #+#    #+#             */
/*   Updated: 2024/08/02 02:04:30 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
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
	if (nb / 10)
	{
		n += ft_putnbr(nb / 10, fd);
		n += ft_putnbr(nb % 10, fd);
	}
	else
		n += ft_putchar_fd(n + '0', fd);
	return (n);
}

int ft_putunbr(unsigned int nb)
{
 unsigned int n;

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
