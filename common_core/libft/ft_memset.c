/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 00:53:08 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/24 16:17:58 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)b;
	while (len--)
		*tmp++ = (unsigned char)c;
	return (b);
}

int	main(void)
{
	char	buffer[20];

	ft_memset(buffer, '\0', sizeof(buffer));
	printf("buffer: %s\n", buffer);
	ft_memset(buffer, '2', sizeof(buffer) - 1);
	printf("buffer: %s\n", buffer);
	ft_memset(buffer, '4', sizeof(buffer) - sizeof(buffer) + 1);
	printf("buffer: %s\n", buffer);
	return (0);
}
