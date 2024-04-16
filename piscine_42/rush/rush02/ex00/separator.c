/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 06:06:39 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/07 06:24:19 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*create_number(int j)
{
	char	*str;
	int		i;

	i = 1;
	str = (char *)malloc((j - 1) * 3 + 2);
	str[0] = '1';
	while (i < (j - 1) * 3 + 1)
	{
		str[i] = '0';
		i++;
	}
	str[i] = 0;
	return (str);
}

void	print_separator(int j, char *dict)
{
	if (j > 1)
		putstr(ft_parse_dict(create_number(j), dict));
}
