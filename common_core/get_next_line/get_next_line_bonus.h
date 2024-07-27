/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 05:16:05 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/27 23:29:14 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 84
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
