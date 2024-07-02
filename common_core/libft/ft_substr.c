/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:01:25 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/02 20:15:55 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sp;
	char	*dst;

	i = 0;
	sp = (size_t)start;
	while (s[i])
		i++;
	if (!(sp < i))
		return (NULL);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len && s[i + sp] != '\0')
	{
		dst[i] = s[i + sp];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char	*sld1;
	char	*sld2;

	sld1 = "42_Barcelona!";
	sld2 = ft_substr(sld1, 3, 11);
	printf("%p\tsld1: %s\n%p\tsld2: %s\n", sld1, sld1, sld2, sld2);
	free(sld2);
	return (0);
}
*/
