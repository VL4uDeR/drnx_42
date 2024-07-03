/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 00:27:21 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/03 23:46:10 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	if (!big)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		x = 0;
		while (big[i + x] == little[x] && big[i + x] && (i + x) < len)
		{
			if (little[x + 1] == '\0')
				return ((char *)&big[i]);
			x++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*s1 = "42 es la respuesta!";
	char	*s2 = "resp";
	size_t	max = 15;
	char	*find = ft_strnstr(s1, s2, max);

	printf("find s2: '%s', inside s1: '%s'\n%zu characters max\n", s2, s1, max);
	sleep (2);
	if (find == NULL)
		printf ("str not found u.u\n");
	else
		printf("str found n.n : %s\n", find);
	return (0);
}
*/
