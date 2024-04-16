/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 23:03:47 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/05 07:38:05 by darsalga         ###   ########.fr       */
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
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else if (str[i] >= 'a' && str[i] <= 'z')
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
		write(1, "1", 1);
		printf("\tsolo contiene caracteres alfabeticos o esta 'vacia'\n");
	}
	else
	{
		write(1, "0", 1);
		printf("\tcontiene otro tipo de caracteres\n");
	}
	return (0);
}
*/
