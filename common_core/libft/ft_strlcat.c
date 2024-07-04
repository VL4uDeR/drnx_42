/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:50:55 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/04 04:54:29 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	i = dst_len;
	j = 0;
	while (src[j] && (i + j + 1) < size)
	{
		dst[j + i] = src[j];
		j++;
	}
	dst[j + i] = '\0';
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
