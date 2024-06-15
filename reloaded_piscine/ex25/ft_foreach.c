/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 21:14:25 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/14 23:08:35 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

void	ft_putnbr(int nbr);
void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(void)
{
	int	n[19];

	for (int i = 0; i < 21; i++)
		n[i] = i;
	ft_foreach(n, 21, ft_putnbr);
	return (0);
}

void	ft_putnbr(int nbr)
{
	printf("%d\n", nbr);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
