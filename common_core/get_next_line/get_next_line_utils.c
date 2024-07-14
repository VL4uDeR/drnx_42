/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:00:31 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/12 03:00:39 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1024

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = (nmemb * size);
	if ((total / nmemb) != size)
		return (NULL);
	p = malloc(total);
	if (!(p))
		return (NULL);
	ft_bzero(p, total);
	return (p);
}

#endif
