/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:07:34 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/14 14:24:52 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*n_bet;

	i = 0;
	if (min >= max)
		return (NULL);
	n_bet = malloc(sizeof(int) * (max - min));
	if (!(n_bet))
		return (NULL);
	while (i < (max - min))
	{
		n_bet[i] = min + i;
		i++;
	}
	return (n_bet);
}
/*
int	main(void)
{
	int	*range;
	int	min;
	int	max;

	min = 1;
	max = 20;
	range = ft_range(min, max);
	for (int i = 0; i < (max - min); i++)
	{
		printf("n_bet[%d]: %d\n", i, range[i]);
	}
	free(range);
	return (0);
}
*/
