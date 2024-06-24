/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 00:45:45 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/24 21:37:37 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f'
		|| c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		nbr = nbr * 10 + (*nptr - '0');
		nptr++;
	}
	return (nbr * sign);
}
/*
int	main(void)
{
	char	*nbrstr;

	nbrstr = "		-00726   ";
	printf("%d\n", ft_atoi(nbrstr));
	printf("%d\n", atoi(nbrstr));
	return (0);
}
*/
