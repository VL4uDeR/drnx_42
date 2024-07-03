/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:43:38 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/03 19:40:51 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	print_char(unsigned int index, char *c)
{
	printf("Index: %u, Char: %c\n", index, *c);
}

int main()
{
	char *sld;

	sld = "42_Barcelona!";
	ft_striteri(sld, print_char);
	return (0);
}
*/
