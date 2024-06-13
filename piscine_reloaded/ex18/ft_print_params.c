/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 22:46:50 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/09 00:55:44 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	i = 1;
	while (i < argc)
	{
		x = 0;
		while (argv[i][x] != '\0')
		{
			ft_putchar(argv[i][x]);
			x++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
