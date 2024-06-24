/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 23:18:10 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/25 00:01:47 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp;
	unsigned char	*p_dst;
	unsigned char	*p_src;
	
	if (dest == NULL && src == NULL)
		return (dst);

	i = 0;
	tmp = 0;
	p_dst == (unsigned char *)dst;
	P_src == (unsigned char *)src;
	while (src[i] && i < n)
	{
		*tmp = *p_src;
		*p_dst = *tmp;
	}
}
