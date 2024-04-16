/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 05:45:50 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/07 19:47:42 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

int		main(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		ft_word_len(int i);
int		ft_realloc(char **str, char sign);
int		check_args(int argc, char **argv);
char	*ft_parse_dict(char *str, char *file);
char	*ft_parse_dict_internal(char *str, int fd);
char	*ft_get_word_in_dict(int fd, int nb_char, char buffer);
char	*ft_remove_multiple_space(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*get_nbr(int argc, char **argv);
char	*get_dict(int argc, char **argv);
char	*ft_cat(char c1, char c2);
char	*ft_string(char c1);
char	*create_number(int j);
void	print_number(char *str, char *dict);
void	putstr(char *str);
void	print_separator(int j, char *dict);
void	ft_go_to_next_line(int *fd, int *i);
void	ft_error(void);
void	ft_print_separator_with_space(int j, char *dict);
void	ft_remove_start_zeros(char **str);
void	div_string(int *i, char *str, char *argv, int *l);
void	print_words(int i, char *nbr, char *dict, char *str);
void	print_tab2(char *str, char *dict);
void	print_tab3(char *str, char *dict);
void	div_string_extra(int *i, char *str, char *nbr, int *l);
void	div_string_perfect(char *str, char *nbr, int *l);

#endif
