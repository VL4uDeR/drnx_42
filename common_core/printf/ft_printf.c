/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 01:54:06 by darsalga          #+#    #+#             */
/*   Updated: 2024/08/09 00:33:08 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_check(va_list args, char c)
{
	int	len;

	len = 0;
	if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'd' || c == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (c == 'u')
		len = ft_putunbr(va_arg(args, unsigned int));
	else if (c == 'x')
		len = ft_puthex_lo(va_arg(args, unsigned int));
	else if (c == 'X')
		len = ft_puthex_up(va_arg(args, unsigned int));
	else if (c == 'p')
		len = ft_print_pointer(va_arg(args, unsigned long long));
	return (len);
}

int	ft_printf(char const *format, ...)
{
	int			i;
	va_list		args;
	int			len;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
				len += ft_check(args, format[++i]);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
