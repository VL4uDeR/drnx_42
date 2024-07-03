/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:50:55 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/03 23:38:49 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dst || !src)
	{
		if (size == 0)
			return (src_len);
		return (0);
	}
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
	char	dst[30] = "42!";
	char	*src = " es la respuesta!";
	int		size = sizeof(dst);
	int		rtrn = ft_strlcat(dst, src, size);

	printf("str src: %s\nstr dst: %s\n", src, dst);
	printf("len dst = '%d'\nbuffer_size = '%d'\n", rtrn, size);
	return (0);
}
*/
