/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 23:10:23 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/08 16:56:30 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char			*frase1 = "holaMundo12";
	char			*frase2 = "holaMundo1";
	unsigned int	size = 10;

	if (ft_strncmp(frase1, frase2, size) == 0)
		printf("%s\n", "son iguales!");
	else if (ft_strncmp(frase1, frase2, size) > 0)
		printf("%s\n", "s1 es MAYOR que s2");
	else
		printf("%s\n", "s1 es menor que s2");
	return (0);
}
*/
