/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:00:11 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/27 02:19:20 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

char	*get_line(char *fd_stash)
{
	size_t		i;
	char		*line;

	i = 0;
	if (!fd_stash[i])
		return (NULL);
	while (fd_stash[i] && fd_stash[i] != '\n')
		i++;
	if (fd_stash[i] == '\n')
		i++;
	line = ft_calloc((i + 1), sizeof(char));
	if (!line)
		return (NULL);
	ft_strlcpy(line, fd_stash, (i + 1));
	return (line);
}

char	*get_cleanup(char *fd_stash)
{
	size_t	i;
	char	*ini_pos;
	char	*new_stash;

	if (!fd_stash)
		return (NULL);
	i = 0;
	ini_pos = ft_strchr(fd_stash, '\n');
	if (!ini_pos)
	{
		free(fd_stash);
		return (NULL);
	}
	ini_pos++;
	while (ini_pos[i])
		i++;
	new_stash = ft_calloc((i + 1), sizeof(char));
	if (!new_stash)
	{
		free(fd_stash);
		return (NULL);
	}
	ft_strlcpy(new_stash, ini_pos, i + 1);
	free(fd_stash);
	return (new_stash);
}

char	*read_fd(int fd, char *fd_stash)
{
	int		rd_bytes;
	char	*buf;

	buf = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buf)
		return (NULL);
	rd_bytes = 1;
	while (!ft_strchr(fd_stash, '\n') && rd_bytes != 0)
	{
		rd_bytes = read(fd, buf, BUFFER_SIZE);
		if (rd_bytes == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[rd_bytes] = '\0';
		fd_stash = ft_strjoin(fd_stash, buf);
	}
	free(buf);
	return (fd_stash);
}

char	*get_next_line(int fd)
{
	char		*next_line;
	static char	*fd_stash;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	fd_stash = read_fd(fd, fd_stash);
	if (!fd_stash)
		return (NULL);
	next_line = get_line(fd_stash);
	fd_stash = get_cleanup(fd_stash);
	return (next_line);
}
