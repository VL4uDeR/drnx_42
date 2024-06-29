/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 21:34:52 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/29 01:51:33 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words_count(char const *s, char c)
{
	size_t	flag;
	size_t	count;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (*s == c && flag == 1)
			flag = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
}
