/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 21:44:20 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/02 23:49:27 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>

static int	get_nlen(int n)
{
	int	len;

	len = 0;
	if (n != 0)
	{
		if (n < 0)
		{
			n *= -1;
			len++;
		}
		while (n != 0)
		{
			n /= 10;
			len++;
		}
	}
	else
		len = 1;
	return (len);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*strnb;
	long int	nbr;

	i = (get_nlen(n));
	strnb = malloc((i + 1) * (sizeof(char)));
	nbr = n;
	if (!strnb)
		return (NULL);
	strnb[i] = '\0';
	i--;
	if (nbr == 0)
		strnb[0] = '0';
	if (nbr < 0)
	{
		strnb[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		strnb[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (strnb);
}
/*
int	main(void)
{
	int	n;

	n = -2147483647;
	printf("%s\n", ft_itoa(n));
	return (0);
}
*/
