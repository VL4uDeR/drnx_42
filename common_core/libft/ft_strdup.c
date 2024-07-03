/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 22:46:39 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/03 22:48:42 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_getlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((char *)dst);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dst;

	len = ft_getlen(s);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_strcpy(dst, s);
	return (dst);
}
/*
int	main(void)
{
	char	*saludo;
	char	*mirror;

	saludo = "42_Barcelona es la respuesta!!!";
	mirror = ft_strdup(saludo);
	if (mirror == NULL)
	{
		printf("error al duplicar la string \n");
		return (1);
	}
	else
		printf("duplicado exitoso:\n%p	%s\n%p	%s\n",
			saludo, saludo, mirror, mirror);
	free(mirror);
	return (0);
}
*/
