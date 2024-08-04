/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 01:54:06 by darsalga          #+#    #+#             */
/*   Updated: 2024/08/04 05:17:59 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_check(va_list args, char c)
{
	int	n;

	n = 0;
	if (c == 'd' || c == 'i')
		n = ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		n = ft_putchar(va_arg(args, int));
	else if (c == 's')
		n = ft_putstr(va_arg(args, char *));
	else if (c == 'x')
		n = ft_puthex_lo(va_arg(args, unsigned int));
	else if (c == 'X')
		n = ft_puthex_up(va_arg(args, unsigned int));
	else if (c == 'p')
		n = ft_print_pointer(va_arg(args, unsigned long long));
	else if (c == 'u')
		n = ft_putunbr(va_arg(args, unsigned int));
	else if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
	return (n);
}

int	ft_printf(char const *format, ...)
{
	int			i;
	va_list		args;
	int			n;

	va_start(args, format);
	n = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				n += ft_check(args, format[++i]);
		}
		else
			n += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (n);
}
