/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 04:08:00 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/04 05:52:23 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	x;
	char	*dst;

	if (!s1 || !s2)
		return (0);
	i = 0;
	x = 0;
	dst = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[x])
	{
		dst[i + x] = s2[x];
		x++;
	}
	dst[i + x] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char *sld1 = "42_";
	char *sld2 = "Barcelona!";
	char *new = ft_strjoin(sld1, sld2);
	printf("%p\t%s\n%p\t%s\n%p\t%s\n", sld1, sld1, sld2, sld2, new, new);
	free(new);
	return (0);
}
*/
