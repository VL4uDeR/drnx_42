/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prep.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judblanc <judblanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:08:26 by judblanc          #+#    #+#             */
/*   Updated: 2024/04/07 20:37:39 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	div_string_extra(int *i, char *str, char *nbr, int *l)
{
	int	k;

	k = 0;
	while (*i % 3 != 0)
	{
		str[k] = nbr[*l];
		(*i)--;
		k++;
		(*l)++;
	}
}

void	div_string_perfect(char *str, char *nbr, int *l)
{
	int	k;
	int	j;

	k = 0;
	j = 0;
	while (j < 3)
	{
		str[k] = nbr[*l];
		j++;
		k++;
		(*l)++;
	}
}

void	div_string(int *i, char *str, char *nbr, int *l)
{
	if (*i % 3 != 0)
	{
		div_string_extra(i, str, nbr, l);
	}
	else
	{
		div_string_perfect(str, nbr, l);
	}
	str[*i] = '\0';
}

char	*ft_parse_dict_internal(char *str, int fd)
{
	int		i;
	char	buffer;
	char	*output;

	i = 0;
	while (read(fd, &buffer, 1))
	{
		if (str[i] != buffer && str[i] != '\0')
		{
			ft_go_to_next_line(&fd, &i);
			continue ;
		}
		if ((buffer == ':' || buffer == ' ') && str[i] == '\0')
			output = ft_get_word_in_dict(fd, i, buffer);
		if (str[i] == '\0')
		{
			ft_go_to_next_line(&fd, &i);
			continue ;
		}
		i++;
	}
	return (output);
}

char	*ft_parse_dict(char *str, char *file)
{
	int		fd;
	char	*output;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	output = ft_parse_dict_internal(str, fd);
	close(fd);
	return (ft_remove_multiple_space(output));
}
