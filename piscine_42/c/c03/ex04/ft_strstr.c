/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:17:01 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/10 08:07:14 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && str[i] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main(int argc, char **argv)
{
    char    *saludo = "asdfasdfholaMundo!";
    char    *hola = "h";
	char	*entrada = argv[1];
	char 	*busca = argv[2];
	int		len = 0;

	if (argc == 1)
	{
		while ((ft_strstr(saludo, hola)[len]))
			len++;
		write(1, (ft_strstr(saludo, hola)), len);
	}
	else if (argc == 3)
	{
		while ((ft_strstr(entrada, busca)[len]))
			len++;
		write(1, (ft_strstr(entrada, busca)), len);
	}
	else
		write(1, "\n", 1);
	return (0);
}
*/
