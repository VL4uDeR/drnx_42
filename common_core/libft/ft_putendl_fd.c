/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:36:34 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/04 06:07:54 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
	{
		write(fd, &*s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
int	main(void)
{
	char	*sld;

	sld = "42 es la respuesta!";
	ft_putendl_fd(sld, 1);
	return (0);
}
*/
