/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 00:56:52 by darsalga          #+#    #+#             */
/*   Updated: 2024/08/04 05:08:41 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int	ft_check(va_list args, char c);
int	ft_printf(char const *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_puthex_lo(unsigned int nb);
int	ft_puthex_up(unsigned int nb);
int	ft_putadress(unsigned long nb);
int	ft_print_pointer(unsigned long long ptr);

#endif
