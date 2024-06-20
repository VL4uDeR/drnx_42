/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:35:29 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/21 00:01:45 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	count1;
	int	count2;

	i = 0;
	count1 = 0;
	count2 = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			count1++;
		i++;
	}
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			count2++;
			if (count1 == count2)
				return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] && ((char)c == '\0'))
		return ((char *)&str[i]);
	return (NULL);
}

int	main(void)
{
	char	*sld;
	int		c;

	sld = "42 es la ResRpuesta!";
	c = 'R';
	printf("%s\n", ft_strrchr(sld, c));
	printf("%s\n", strrchr(sld, c));
	return (0);
}
