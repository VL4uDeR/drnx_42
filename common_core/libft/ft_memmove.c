/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:18:10 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/26 01:12:58 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p_dst;
	const unsigned char	*p_src;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	p_dst = (unsigned char *)dst;
	p_src = (const unsigned char *)src;
	if (p_dst > p_src)
		while (n-- > 0)
			p_dst[n] = p_src[n];
	else
	{
		while (i < n)
		{
			p_dst[i] = p_src[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	int		n = 30;
	char	*sld = "42 Barcelona es la respuesta";
	char	buffer[n];

	printf("address src (%p): %s\n", sld, sld);
	printf("address dst (%p): %s\n", buffer, buffer);
	ft_memmove(buffer, sld, n);
	printf("(ft)address dst (%p): %s\n", buffer, buffer);
	memmove(buffer, sld, n);
	printf("(og)address dst (%p): %s\n", buffer, buffer);
	return (0);
}
*/
