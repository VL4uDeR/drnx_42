/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:05:19 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/29 17:49:43 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*rtn;
	char	*dup;
	size_t	tail;

	if (!s1 || !set)
		return (NULL);
	dup = (char *)s1;
	if (!dup)
		return (NULL);
	while (*dup && in_set(*dup, set))
		dup++;
	tail = ft_strlen(dup);
	while (tail > 0 && in_set(dup[tail - 1], set))
		tail--;
	rtn = malloc((sizeof(char)) * (tail + 1));
	if (!rtn)
		return (NULL);
	ft_strlcpy(rtn, dup, tail + 1);
	return (rtn);
}
/*
int	main(void)
{
	char	*slds;
	char	*sld;
	char	*trimed;

	slds = "afa fs d 42_Barcelona ! a dsa faf";
	sld = " asdf";
	trimed = ft_strtrim(slds, sld);
	printf("%p\t%s\n", trimed, trimed);
	free(trimed);
	return (0);
}
*/
