/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 02:13:23 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/03 03:05:35 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	unsigned int		len;
	char				*dst;

	len = ft_strlen(s);
	dst = (ft_calloc((len + 1), sizeof(char)));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = (*f)(i, s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
/*
char	my_ft(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}

int	main(void)
{
	char	*sld;

	sld = "42_barcelonaasdfasdfajsdnlisadkmfsaasdofp!";
	printf("%s\n", ft_strmapi(sld, my_ft));
	return (0);
}
*/
