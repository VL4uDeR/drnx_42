/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danijime <danijime@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 16:00:43 by danijime          #+#    #+#             */
/*   Updated: 2024/03/24 00:24:48 by judblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char z);
void	rush(int x, int y);
void	condition(int x, int y);

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		write (1, "Por favor, introduce un numero positivo.", 40);
	else
	{
		condition(x, y);
	}
}

void	condition(int x, int y)
{
	int	row;
	int	column;

	row = 1;
	while (row <= y)
	{
		column = 1;
		while (column <= x)
		{
			if ((row == 1 || row == y) && (column == 1 || column == x))
				ft_putchar('o');
			else if ((row == 1 || row == y) && (column != 1 || column != x))
				ft_putchar('-');
			else if ((column == 1 || column == x) && (row != 1 || row != y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			column++;
		}
		ft_putchar('\n');
		row++;
	}
}
