/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 09:47:46 by darsalga          #+#    #+#             */
/*   Updated: 2024/03/27 17:09:43 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	ini;
	int	fin;
	int	tmp;

	ini = 0;
	fin = size - 1;
	while (ini < fin)
	{
		tmp = tab[ini];
		tab[ini] = tab[fin];
		tab[fin] = tmp;
		ini++;
		fin--;
	}
}
