/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:59:18 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/02 19:49:07 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	*p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	p = malloc(nmemb * size);
	if (!(p))
		return (NULL);
	while (i < (nmemb * size))
	{
		((char *)p)[i] = 0;
		i++;
	}
	return ((void *)p);
}
/*
int	main (void)
{
	size_t	n = 76;
	int		*ft_zeros = ft_calloc(n, sizeof(*ft_zeros));
	int		*zeros = calloc(n, sizeof(*zeros));

	printf("ft_malloc : ");
	for (size_t i = 0; i < n; i++)
		printf("/%d", ft_zeros[i]);
	printf("\nmalloc : ");
	for (size_t i = 0; i < n; i++)
		printf("/%d", ft_zeros[i]);
	printf("\n");
	return (0);
}
*/
