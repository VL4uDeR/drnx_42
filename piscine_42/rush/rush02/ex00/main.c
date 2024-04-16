/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 03:30:12 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/07 18:35:16 by judblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*get_nbr(int argc, char **argv)
{
	if (argc == 2)
		return (argv[1]);
	else
		return (argv[2]);
}

char	*get_dict(int argc, char **argv)
{
	if (argc == 2)
		return ("numbers.dict");
	else
		return (argv[1]);
}

void	print_words(int i, char *nbr, char *dict, char *str)
{
	int	j;
	int	k;
	int	l;

	j = i / 3;
	if (i % 3 != 0)
		j++;
	k = j;
	while (j != 0)
	{
		div_string(&i, str, nbr, &l);
		if (j != k && ft_strcmp(str, "000") != 0)
			write(1, " ", 1);
		if (j == 1 && ft_strcmp(str, "000") != 0 && str[0] == '0' && k != 1)
			write(1, " ", 1);
		print_number(str, dict);
		if (ft_strcmp(str, "000") != 0 && j != 1)
			ft_print_separator_with_space(j, dict);
		j--;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*nbr;
	char	*dict;
	int		i;

	i = check_args(argc, argv);
	if (i == -1)
	{
		ft_error();
		return (0);
	}
	nbr = get_nbr(argc, argv);
	dict = get_dict(argc, argv);
	str = (char *)malloc(sizeof(char) * 4);
	print_words(i, nbr, dict, str);
	return (0);
}
