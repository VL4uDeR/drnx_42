/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:42:56 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/08 16:58:10 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
/*
int main (void)
{
	char *frase1 = "soleado";
	char *frase2 = "solead.";

	if (ft_strcmp(frase1, frase2) == 0)
		printf("%s\n", "son iguales!");
	else if (ft_strcmp(frase1, frase2) > 0)
		printf("%s\n", "s1 es MAYOR que s2");
	else
		printf("%s\n", "s1 es menor que s2");
	return (0);
}
*/
