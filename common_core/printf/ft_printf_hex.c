/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:35:19 by darsalga          #+#    #+#             */
/*   Updated: 2024/08/09 00:33:32 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_lo(unsigned int nb)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		len += ft_puthex_lo(nb / 16);
		len += ft_puthex_lo(nb % 16);
	}
	else
		len += ft_putchar(base[nb % 16]);
	return (len);
}

int	ft_puthex_up(unsigned int nb)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		len += ft_puthex_up(nb / 16);
		len += ft_puthex_up(nb % 16);
	}
	else
		len += ft_putchar(base[nb % 16]);
	return (len);
}

int	ft_putadress(unsigned long nb)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		len += ft_putadress(nb / 16);
		len += ft_putadress(nb % 16);
	}
	else
		len += ft_putchar(base[nb % 16]);
	return (len);
}

int	ft_print_pointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	len += ft_putadress(ptr);
	return (len);
}
