/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:08:17 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/17 23:43:10 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
int	main(int argc, char *argv[])
{
	char	*slds;

	slds = "hola_Mundo!!!";
	if (argc == 2)
		printf("%s\nft_strlen(%d)\n", argv[1], ft_strlen(argv[1]));
	else
		printf("%s\nft_strlen(%d)\n", slds, ft_strlen(slds));
	return (0);
}
*/
