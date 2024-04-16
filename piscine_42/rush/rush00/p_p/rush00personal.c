/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00personal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 02:52:49 by darsalga          #+#    #+#             */
/*   Updated: 2024/03/24 04:40:04 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int	width;
	int	height;

	while (++height <= y)
	{
		while (++width <= x)
		{
			if ((width == 1 || width == x) && (height == 1 || height == y))
			{
				ft_putchar('o');
			}
			else if (height == 1 || height == y)
			{
				ft_putchar('-');
			}
			else if (width == 1 || width == x)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
		}
		ft_putchar('\n');
		width = (0);
	}
}

int	main(void)
{
	rush (80, 50);
	return (0);
}
