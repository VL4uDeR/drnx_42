/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:26:24 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/18 20:34:09 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

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
	char	*slds = "42 es la respuesta!";
	char	cpy[12];
	short	size = sizeof(cpy);
	short	rtrn = ft_strlcpy(cpy, slds, size);

	printf("str src: %s\nstr cpy: %s\nlen src = '%d'\nsize = '%d'\n",
		slds, cpy, rtrn, size);
	return (0);
}
*/
