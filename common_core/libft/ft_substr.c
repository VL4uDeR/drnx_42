/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:01:25 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/04 03:31:56 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*dst;

	if (s == 0)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = s[i + start];
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
