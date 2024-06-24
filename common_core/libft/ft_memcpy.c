/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:24:40 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/24 13:39:14 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dst == NULL && src == NULL)
		return (dst);
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}

int	main(void)
{
	char	*sld;
	char	copia[20];

	sld = "42 es la respuesta!!!";
	printf("before memcpy: %s\n", copia);
	ft_memcpy(copia, sld, strlen(sld) + 1);
	printf("after memcpy: %s\n", copia);
	return (0);
}
