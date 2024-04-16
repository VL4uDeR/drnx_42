/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:23:20 by darsalga          #+#    #+#             */
/*   Updated: 2024/03/31 16:53:58 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &*str, 1);
//		write(1, "\n", 1);	esta linea esta comentada
		str++;
	}
}

int	main(void)
{
	ft_putstr("Prueba Final! pasa norminnette y gcc -Wall -Wextra -Werror!");
	return (0);
}
