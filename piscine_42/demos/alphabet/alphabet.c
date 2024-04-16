/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphabet.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:57:07 by darsalga          #+#    #+#             */
/*   Updated: 2024/03/31 17:30:50 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	alpha(void)
{
	char	letra1;
	char	letra2;
	int		count;

	count = 0;
	while (count <= 20)
	{
		letra1 = 'A';
		while (letra1 <= 'Z')
		{
			write(1, &letra1, 1);
			letra1++;
		}
		write(1, "\n", 1);
		write(1, "\t", 1);
		letra2 = 'Z';
		while (letra2 >= 'A')
		{
			write(1, &letra2, 1);
			letra2--;
		}
		count++;
		write(1, "\n", 1);
	}
}

int	main(void)
{
	alpha();
	return (0);
}
