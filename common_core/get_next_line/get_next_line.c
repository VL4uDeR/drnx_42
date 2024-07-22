/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:00:11 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/22 21:02:53 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*get_line(int fd, char *fd_stach)
{
	int		rd_bytes;
	char	*buff;

	rd_bytes = 1;
	buff = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buff)
		return (NULL);
	while (!ft_strchr(fd_stach, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buff, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
	//	buff[rd_bytes] = '\0';
		fd_stach = ft_strjoin(fd_stach, buff);
	}
	free(buff);
	return (fd_stach);
}

char	*get_next_line(int fd)
{
	char		*next_line;
	static char	*fd_stach;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);

}
