/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 09:05:57 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/03 13:53:33 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;	
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	while (src[src_length])
		src_length++;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_length);
}
/*
int	main(void)
{
	char	fuente[20];
	char	receptaculo[0];
	
	strcpy(fuente, "holaMUNDO!");
	printf("%s\n", fuente);
	ft_strlcpy(receptaculo, fuente, 10);
	printf("%s\n", receptaculo);
	return (0);
}
*/
