/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:24:40 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/02 16:54:29 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dst == NULL && src == NULL)
		return (0);
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}
/*
int	main(void)
{
	char	*sld;
	char	copia[20];

	sld = "42 es la respuesta!";
	printf("src str: %p: %s\n", &sld, sld);
	printf("before memcpy: %p: %s\n", &copia, copia);
	ft_memcpy(copia, sld, ft_strlen(sld) + 1);
	printf("after memcpy: %p: %s\n", &copia, copia);
	return (0);
}
*/
