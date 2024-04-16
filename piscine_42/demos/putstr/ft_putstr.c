/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 12:09:56 by darsalga          #+#    #+#             */
/*   Updated: 2024/03/31 13:39:50 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h> // Incluimos la biblioteca necesaria para la función write

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1); //avanza mientras imprime 1 a 1 los caracteres, tambien se puede representar en otra linea con str++
	}
}

int	main(void)
{
	char	*mensaje;

	mensaje = "¡Vamos wn! asi se hace, a seguir aprendiendo :D!";
	ft_putstr(mensaje);
	return (0);
}
