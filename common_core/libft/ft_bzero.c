/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 04:49:57 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/26 05:59:17 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = '\0';
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*
void	printmem(void *s, size_t n)
{
	for (size_t i = 0; i < n;  i++)
	{
		if (ft_isprint(((char *)s)[i]))
			printf("%c", ((char *)s)[i]);
		else
			printf("/%d", ((char *)s)[i]);
	}
	printf("\n");
}

int	main(void)
{
	int n = 9;
	char sld[25] = "42 es la respuesta!!!";

	printf("%s\n", sld);
	ft_bzero(sld, n);
	printmem(sld, sizeof(sld));
	return (0);
}
*/
