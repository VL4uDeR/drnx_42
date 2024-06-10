/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 23:42:39 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/11 01:21:22 by darsalga         ###   ########.fr       */
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
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
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
	int		i;
	int		x;
	char	*tmp;

	i = 1;
	if (argc == 2)
	{
		ft_print_argvs(argc, argv);
		return (0);
	}
	while (i < argc)
	{
		x = i + 1;
		while (x < argc)
		{
			if (ft_strcmp(argv[i], argv[x]) > 0)
			{
				tmp = argv[x];
				argv[x] = argv[i];
				argv[i] = tmp;
			}
			x++;
		}
		i++;
	}
	ft_print_argvs(argc, argv);
	return (0);
}
