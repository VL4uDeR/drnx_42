/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 20:35:29 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/21 23:45:53 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last_encounter;

	last_encounter = NULL;
	while (*str)
	{
		if (*str == (char)c)
			last_encounter = str;
		str++;
	}
	if (*str == '\0' && ((char)c == '\0'))
		return ((char *)str);
	return ((char *)last_encounter);
}
/*
int	main(void)
{
	char	*sld;
	int		c;

	sld = "42 Res lRa ResRpuResta!";
	c = 'R';
	printf("str original : %s\n", sld);
	printf("%s\n", ft_strrchr(sld, c));
	printf("%s\n", strrchr(sld, c));
	return (0);
}
*/
