/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:34:52 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/29 17:49:00 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words_count(char const *s, char c)
{
	size_t	flag;
	size_t	count;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*s == c && flag == 1)
			flag = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	**pack;

	i = 0;
	x = 0;
	pack = ft_calloc(words_count(s, c) + 1, sizeof(char *));
	if (!pack)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
		{
			pack[x] = ft_calloc(i - j + 1, sizeof(char));
			ft_strlcpy(pack[x], s + j, i - j + 1);
			x++;
		}
	}
	return (pack);
}

void	ft_free(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
/*
int	main(int ac, char **av)
{
	char	*sld;
	char	**w_sld;
	char	**input;
	char	**op1;
	char	**op2;

	sld = "42_Barcelona Trust_the_process hola_Mundo lml, n.n!";
	w_sld = ft_split(sld, ' ');
	op1 = w_sld;
	if (ac == 1)
	{
		while (*w_sld)
		{
			printf("%s\n", *w_sld);
			w_sld++;
		}
		ft_free(op1);
	}
	if (ac > 2)
	{
		input = ft_split(av[1], av[2][0]);
		op2 = input;
		while (*input)
		{
			printf("%s\n", *input);
			input++;
		}
		ft_free(op2);
	}
	return (0);
}
*/
