/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 08:16:24 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/05 21:18:58 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 'a' + 'A';
		i++;
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		while (str[i] >= 32 && str[i] <= 47)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 'a' + 'A';
			i++;
		}
	}
	return (str);
}

#include "unistd.h"
int	main(void)
{
	char	saludo[100];
	char	*prueba;

	prueba = "hola_soy_prueba";

	strcpy(saludo, " s2mots quarAnte cinquante+et+Un E.puntOs");
	ft_strcapitalize(saludo);
	printf("%s\n", saludo);
	printf("%s\n", prueba);
	write(1, "hola_soy_prueba", 50);


	return (0);
}
