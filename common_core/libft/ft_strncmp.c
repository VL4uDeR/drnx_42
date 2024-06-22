/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 20:19:47 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/21 23:39:30 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i <= n)
	{
		i++;
	}
	return (((unsigned char)s1[i] - (unsigned char)s2[i]));
}
/*
int	main(void)
{
	char	*sld1;
	char	*sld2;
	size_t		n;

	sld1 = "42 es la respuesta";
	sld2 = "42 es la respuestA";
	n = 25 ;
	printf("s1: %s\ns2: %s\n", sld1, sld2);
	printf("%d\n", ft_strncmp(sld1, sld2, n));
	printf("%d\n", strncmp(sld1, sld2, n));
	return (0);
}
*/
