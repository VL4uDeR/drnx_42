/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:50:55 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/19 16:56:54 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dst_len;
	unsigned int	src_len;

	i = 0;
	dst_len = 0;
	src_len = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (dst_len + src_len);
	while (src[i] && i < size - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
int	main(void)
{
	char	slds[25] = "42!";
	char	*cpy = " es la respuesta!";
	short	size = sizeof(slds);
	short	rtrn = ft_strlcat(slds, cpy, size);

	printf("str src: %s\nstr dst: %s\nlen src = '%d'\nbuffer_size = '%d'\n",
		cpy, slds, rtrn, size);
	return (0);
}
*/
