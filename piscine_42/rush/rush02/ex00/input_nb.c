/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_nb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 05:56:49 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/07 16:46:36 by judblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	ft_realloc(char **str, char sign)
{
	int		len;
	char	*str_cpy;

	len = ft_strlen(*str);
	str_cpy = (char *)malloc(sizeof(char) * (len + 100));
	if (sign == '+')
	{
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	else
	{
		str_cpy = (char *)malloc(sizeof(char) * len);
		ft_strncpy(str_cpy, *str, len + 1);
		free(*str);
		*str = str_cpy;
	}
	return (1);
}
