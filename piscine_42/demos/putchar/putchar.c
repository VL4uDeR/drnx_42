/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:42:23 by darsalga          #+#    #+#             */
/*   Updated: 2024/03/31 18:56:28 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	putchar('F');
	putchar('\n');
	putchar('\t');
	putchar('U');
	putchar('\n');
	putchar('\t');
	putchar('\t');
	putchar('C');
	putchar('\n');
	putchar('\t');
	putchar('\t');
	putchar('\t');
	putchar('K');
	putchar('\n');
	putchar('\t');
	putchar('\t');
	putchar('\t');
	putchar('\t');
	putchar('u');
	return (0);
}
