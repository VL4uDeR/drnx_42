/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 01:03:50 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/24 18:38:08 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}
/*
int	main(void)
{
	char	alp;

	alp = '?';
	printf("%d\n", ft_isalpha(alp));
	printf("%d\n", isalpha(alp));
	if (ft_isalpha(alp) == 1)
		printf("is alpha! :D\n");
	else
		printf("is not alpha D:\n");
	return (0);
}
*/
