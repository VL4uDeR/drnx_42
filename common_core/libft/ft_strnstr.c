/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 00:27:21 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/22 02:00:47 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && big[i + x] && (i + x) < len)
		{
			x++;
			if (little[x] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*s1 = "holaMundo";
	char	*s2 = "Mu";
	size_t	max = 6;
	char	*i1 = ft_strnstr(s1, s2, max);

	printf("strnstr: %s\n", i1);
	return (0);
}
