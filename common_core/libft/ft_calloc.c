/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:59:18 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/04 05:34:56 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = (nmemb * size);
	if ((total / nmemb) != size)
		return (NULL);
	p = malloc(total);
	if (!(p))
		return (NULL);
	ft_bzero(p, total);
	return (p);
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
