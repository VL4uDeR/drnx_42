/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:19:47 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/08 22:15:55 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i] && i != nb)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int main(int argc, char **argv)
{
	char	saludo1[25] = "holaMundo!";
	char	*saludo2 = "helloWorld!";
	int		index = 0;
	int		useless = argc;

	if (argc == 25000)
	useless++;
	while (argv[1][index])
	{
		write (1, &argv[1][index], 1);
		index++;
	}
	printf("%s\n%s\n", saludo1, saludo2);
	ft_strncat(saludo1, saludo2, 11);
	printf("%s\n", saludo1);
	return (0);
}
*/
