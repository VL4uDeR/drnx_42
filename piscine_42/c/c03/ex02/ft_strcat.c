/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:04:45 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/08 19:44:59 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
	{
		len++;
	}
	while (src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char saludo1[25] = "holaMundo!";
	char *saludo2;
	
	saludo2 = "helloWorld!";
	printf("%s\n%s\n", saludo1, saludo2);
	ft_strcat(saludo1, saludo2);
	printf("%s\n", saludo1);
	return (0);
}
*/
