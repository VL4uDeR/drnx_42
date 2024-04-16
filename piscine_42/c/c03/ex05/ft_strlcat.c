/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:12:13 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/11 11:15:08 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if (size <= len_dest)
		return (size + len_src);
	while (src[i] != '\0' && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	if (len_dest + i < size)
		dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}

int	main(int count, char **argv)
{
	char *entrada = argv[1];
	char *salida = argv[2];
	int len = 0;
	char saludo1[10] = "hola";
	char saludo2[] = "mundo";
	if (count == 1)
	{
		while (saludo1[len])
			len++;
		write(1, saludo1, len);
		write(1, "\n", 1);
		ft_strlcat(saludo1, saludo2, 10);
		write(1, saludo1, 10);
		write(1, "\n", 1);
		return (0);
	}
	else if (count == 3)
	{
		while (entrada[len])
			len++;
		write(1, entrada, len);
		write(1, "\n", 1);
		ft_strlcat(entrada, salida, 11);
		write(1, entrada, 11);
		write(1, "\n", 1);
	}
	else
		write (1, "\n", 1);
}

