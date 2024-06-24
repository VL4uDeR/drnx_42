/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 02:42:10 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/24 18:23:07 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}
/*
int	main(void)
{
	int	an;

	an = '+';
	printf("%d\n", ft_isalnum(an));
	printf("%d\n", isalnum(an));
	return (0);
}
*/
