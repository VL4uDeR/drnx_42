/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 04:57:18 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/07 14:43:49 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_cat(char c1, char c2)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 3);
	str[0] = c1;
	str[1] = c2;
	str[2] = 0;
	return (str);
}

char	*ft_string(char c1)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	str[0] = c1;
	str[1] = 0;
	return (str);
}

void	print_tab2(char *str, char *dict)
{
	if (str[0] == '1')
		putstr(ft_parse_dict(ft_cat(str[0], str[1]), dict));
	else
	{
		putstr(ft_parse_dict(ft_cat(str[0], '0'), dict));
		if (str[1] != '0')
		{
			write(1, "-", 1);
			putstr(ft_parse_dict(ft_string(str[1]), dict));
		}
	}
}

void	print_tab3(char *str, char *dict)
{
	if (str[0] != '0')
	{
		putstr(ft_parse_dict(ft_string(str[0]), dict));
		write(1, " ", 1);
		putstr(ft_parse_dict("100", dict));
		if (str[1] != '0' || str[2] != '0')
			write(1, " ", 1);
	}
	if (str[1] != '0' || str[2] != '0')
	{
		if (str[1] == '0')
			putstr(ft_parse_dict(&str[2], dict));
		else if (str[1] == '1')
			putstr(ft_parse_dict(ft_cat(str[1], str[2]), dict));
		else
		{
			putstr(ft_parse_dict(ft_cat(str[1], '0'), dict));
			if (str[2] != '0')
			{
				write(1, "-", 1);
				putstr(ft_parse_dict(ft_string(str[2]), dict));
			}
		}
	}
}

void	print_number(char *str, char *dict)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len == 1)
		putstr(ft_parse_dict(str, dict));
	else if (len == 2)
		print_tab2(str, dict);
	else
		print_tab3(str, dict);
}
