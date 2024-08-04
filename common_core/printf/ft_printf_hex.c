/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:35:19 by darsalga          #+#    #+#             */
/*   Updated: 2024/08/03 01:29:25 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lo(unsigned int nb)
{
	int		n;
	char	*base;

	n = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		n += ft_puthex_lo(nb / 16);
		n += ft_puthex_lo(nb % 16);
	}
	else
		n += ft_putchar(base[nb % 16]);
	return (n);
}

int	ft_puthex_up(unsigned int nb)
{
	int		n;
	char	*base;

	n = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		n += ft_puthex_up(nb / 16);
		n += ft_puthex_up(nb % 16);
	}
	else
		n += ft_putchar(base[nb % 16]);
	return (n);
}

int	ft_putadress(unsigned long nb)
{
	int		n;
	char	*base;

	n = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		n += ft_putadress(nb / 16);
		n += ft_putadress(nb % 16);
	}
	else
		n += ft_putchar(base[nb % 16]);
	return (n);
}
