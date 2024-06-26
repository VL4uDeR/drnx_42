/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 01:19:44 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/26 01:25:22 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;
	size_t				i;

	ps1 = (const unsigned char *)s1;
	ps2 = (const unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return (ps1[i] - ps2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int		n = 37;

	char	*sld1 = "42 is the answer!";
	char	*sld2 = "42 is the respuesta!";
	printf("s1: %s\ns2: %s\n", sld1, sld2);
	printf("%d\n", ft_memcmp(sld1, sld2, n));
	printf("%d\n", memcmp(sld1, sld2, n));
	return (0);
}
*/
