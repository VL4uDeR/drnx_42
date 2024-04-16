/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:28:05 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/04 15:22:35 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex[3];

	i = 0;
	while (*str != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			hex[0] = '\\';
			hex[1] = "0123456789abcdef"[(*str >> 4) & 0xF];
			hex[2] = "0123456789abcdef"[*str & 0xF];
			write(1, hex, 3);
			str++;
		}
		else
		{
			write(1, str, 1);
			str++;
		}
	}
}
/*
int main(void)
{
	char saludo[25];

	strcpy(saludo, "wena wn!");
	ft_putstr_non_printable(saludo);
	printf("%s\n", saludo);
	return (0);
}
*/
