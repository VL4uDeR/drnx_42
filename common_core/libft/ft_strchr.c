/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:03:18 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/21 23:43:32 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	*sld;
	int		c;

	sld = "42 es la Respuesta ahRRRg!";
	c = 'R';
	printf("str original : %s\n", sld);
	printf("%s\n", ft_strchr(sld, c));
	printf("%s\n", strchr(sld, c));
	return (0);
}
*/
