/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 23:03:47 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/02 05:07:58 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 90 && str[i] <= 122))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	if (ft_str_is_alpha("holaquehace") == 1)
	{
		printf("\tsolo contiene caracteres alfabeticos o esta 'vacia'\t");
		write(1, "1", 1);
	}
	else
	{
		printf("\tcontiene otro tipo de caracteres\t");
		write(1, "0", 1);
	}
	return (0);
}
*/
