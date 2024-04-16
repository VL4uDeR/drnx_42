/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:33:29 by darsalga          #+#    #+#             */
/*   Updated: 2024/03/31 23:52:55 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[20];
	char	dest[20];
	int		length;

	ft_strcpy(src, "hola mundo!");
	ft_strcpy(dest, src);
	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	write(1, "Cadena copiada: ", 16);
	write(1, dest, length);
	return (0);
}
*/
