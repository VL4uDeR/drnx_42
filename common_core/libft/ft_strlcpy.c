/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:26:24 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/21 22:58:25 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
int	main(void)
{
	char	*sld = "42 es la respuesta!!!";
	char	dst[20];
	int		size = sizeof(dst);
	int		rturn = ft_strlcpy(dst, sld, size);

	printf("str src: %s\nstr cpy: %s\n", sld, dst);
	printf("src_len = '%d'\n", rturn);
	printf("buffer_size = '%d'\n", size);
	return (0);
}
*/
