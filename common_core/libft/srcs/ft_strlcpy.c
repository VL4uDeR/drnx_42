/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:26:24 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/19 16:56:22 by darsalga         ###   ########.fr       */
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
	int		size = sizeof(cpy);
	int		rtrn = ft_strlcpy(cpy, slds, size);
	
	printf("str src: %s\nstr cpy: %s\nsrc_len = '%d'\nbuffer_size = '%d'\n",
		slds, cpy, rtrn, size);
	return (0);
}
*/
