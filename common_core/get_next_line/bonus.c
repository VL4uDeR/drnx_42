/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 23:31:03 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/27 23:47:48 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*line;
	int		fd1;
	int		fd2;
	int		fd3;

	fd1 = open("test/storytest.txt", O_RDONLY);
	fd2 = open("test/test_file.txt", O_RDONLY);
	fd3 = open("test/test.txt", O_RDONLY);
	if (fd1 == -1 || fd2 == -1 || fd3 == -1)
	{
		perror("Error opening file");
		return (1);
	}
	line = get_next_line(fd1);
	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd2);
		printf("%s", line);
		free(line);
		line = get_next_line(fd3);
		printf("%s", line);
		free(line);
		line = get_next_line(fd1);
	}
	close(fd1);
	close(fd2);
	close(fd2);
	printf("Presiona Enter para salir...\n");
	getchar();
	return (0);
}
