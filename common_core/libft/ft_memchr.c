/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 02:50:55 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/26 03:30:10 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	int n = 10;
	char *sld = "42 es la respuesta!!!";
	char c = 'r';
	char *new1 = ft_memchr(sld, c, n);
	char *new2 = memchr(sld, c, n);
	printf("ft: %s\nog: %s\n", new1, new2);
	return (0);
}
*/
