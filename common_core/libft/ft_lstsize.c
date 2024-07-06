/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 19:36:02 by darsalga          #+#    #+#             */
/*   Updated: 2024/07/06 19:39:10 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		len;

	current = lst;
	len = 0;
	while (current)
	{
		len++;
		current = current -> next;
	}
	return (len);
}
/*
int	main(void)
{
	int		size;
	t_list	*head;
	t_list	*n2;
	t_list	*n3;
	t_list	*current;

	head = malloc(sizeof(t_list));
	head -> content = (void *)-8724534138171341240;
	head -> next = NULL;
	n2 = ft_lstnew((void *)"42_barcelona");
	n3 = ft_lstnew((void *)762);
	ft_lstadd_front(&head, n2);
	ft_lstadd_front(&head, n3);
	size = ft_lstsize(head);
	printf("%d\n", size);
	current = head;
	while (current != NULL)
	{
		if (current -> content)
		{
// Como el content puede ser de diferentes tipos
// necesitamos hacer un casting apropiado
			if (current == n2)
				printf("Content: %s\n", (char *)(current -> content));
			else
				printf("Content: %lli\n", (long long)(current -> content));
		}
		current = current -> next;
	}
	return (0);
}
*/
