/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:08:17 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/21 23:36:12 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
int	main(int argc, char *argv[])
{
	char	*slds;

	slds = "hola_Mundo!!!";
	if (argc == 2)
		printf("%s\nft_strlen(%zu)\n", argv[1], ft_strlen(argv[1]));
	else
		printf("%s\nft_strlen(%zu)\n", slds, ft_strlen(slds));
	return (0);
}
*/
