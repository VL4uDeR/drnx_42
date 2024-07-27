/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 05:18:37 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/27 05:18:55 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;
	size_t	i;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	i = 0;
	total = (nmemb * size);
	if ((total / nmemb) != size)
		return (NULL);
	p = malloc(total);
	if (!p)
		return (NULL);
	while (i < total)
	{
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	x;
	char	*dst;

	if (!s1)
		s1 = ft_calloc(1, sizeof(char));
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	x = 0;
	dst = ft_calloc(((ft_strlen(s1) + ft_strlen(s2)) + 1), sizeof(char));
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
	free(s1);
	return (dst);
}

size_t	ft_strlcpy(char *dst, char *src, size_t size)
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

char	*ft_strchr(char *str, int c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (0);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len])
		len++;
	return (len);
}
