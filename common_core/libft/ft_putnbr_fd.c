/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:54:27 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/03 21:08:53 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb;

	nb = ft_itoa(n);
	while (*nb)
	{
		write(fd, &*nb, 1);
		nb++;
	}
}
/*
int	main(void)
{
	int	n;

	n = -2147483647;
	ft_putnbr_fd(n, 1);
	return (0);
}
*/
