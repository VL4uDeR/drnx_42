/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 23:42:39 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/10 01:58:27 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	ft_print_argvs(int argc, char *argv[])
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
}

int	main(int argc, char *argv[])
{
	int	i;
}
