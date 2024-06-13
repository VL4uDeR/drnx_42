/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:19:22 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/13 21:20:29 by darsalga         ###   ########.fr       */
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

	range = ft_range(1, 10);
	for (int i = 0; i < 9; i++)
	{
		printf("n_bet[%d]: %d\n", i, range[i]);
	}
	free(range);
	return (0);
}
*/
