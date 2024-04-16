/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:51:42 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/08 15:03:32 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char	*saludo;
//	char	*nbr;
	double	age;
	int		i;

	saludo = "hola mundo!";
	i = 20;
	age = 1;
	while (i > age)
	{
		printf("%s  %.2f\n  %s", "edad del vampiro", age, saludo);
		age += 1;
	}
	return (0);
}
