/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:00:31 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/14 06:56:33 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = (nmemb * size);
	if ((total / nmemb) != size)
		return (NULL);
	p = malloc(total);
	if (!(p))
		return (NULL);
	ft_bzero(p, total);
	return (p);
}

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

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = '\0';
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

#endif
