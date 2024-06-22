/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 00:45:45 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/23 01:51:07 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	nbr;
	int	minuscount;

	nbr = 0;
	minuscount = 0;
	while (*nptr)
	{
		if (*nptr == '-' || *nptr == '+')
		{
			if (*nptr == '-')
				minuscount++;
			nptr++;
		}
		if (*nptr >= '0' && *nptr <= '9')
		{
			nbr = nbr * 10 + (*nptr - '0');
			nptr++;
		}
	}
	if ((minuscount % 2) != 0)
		return (-nbr);
	return (nbr);
}
/*
int	main(void)
{
	char	*nbrstr;

	nbrstr = "7621267";
	printf("%d\n", ft_atoi(nbrstr));
	return (0);
}
*/
