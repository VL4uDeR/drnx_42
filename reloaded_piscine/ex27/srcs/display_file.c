/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 02:04:44 by darsalga          #+#    #+#             */
/*   Updated: 2024/06/15 02:15:07 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sys/stat.h"
#include "sys/types.h"
#include <fcntl.h>
#include "unistd.h"

int	main(int argc, char *argv[])
{
	int		fd;
	char	c;

	fd = open(argv[1], O_RDONLY);
	if (argc < 2)
		return (write(2, "File name missing.\n", 19));
	else if (argc > 2)
		return (write(2, "Too many arguments.\n", 20));
	else if (fd < 0)
		return (write(2, "Cannot read file.\n", 18));
	while (read(fd, &c, 1))
		write(1, &c, 1);
	close(fd);
	return (0);
}
