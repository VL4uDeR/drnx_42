/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 03:00:52 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/26 06:29:46 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*read_fd(int fd, char *fd_stash);
char	*get_cleanup(char *fd_stash);
char	*get_line(char *fd_stash);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *str, int c);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);

#endif
