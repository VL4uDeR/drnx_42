/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:18:10 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/25 02:33:35 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	tmp[20];
	unsigned char	*p_dst;
	unsigned char	*p_src;

	if (dst == NULL && src == NULL)
		return (dst);
	i = 0;
	tmp[20] = 0;
	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	while (((const char *)src)[i] && i < n)
	{
		tmp[i] = p_src[i];
		p_dst[i] = tmp[i];
		i++;
	}
	return ((unsigned char *)dst);
}
/*
int	main(void)
{
	char	*sld = "42 Barcelona";
	char	buffer[20] = "holaMundo!";

	printf("address src (%p): %s\n", sld, sld);
	printf("address dst (%p): %s\n", buffer, buffer);
	ft_memmove(buffer, sld, 12);
	printf("address dst (%p): %s\n", buffer, buffer);
	return (0);
}
*/
