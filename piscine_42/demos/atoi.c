/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darsalga <darsalga@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 22:36:59 by darsalga          #+#    #+#             */
/*   Updated: 2024/04/06 22:37:04 by darsalga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    char *str = " -2309 ";
    int value = atoi(str);
    printf("Function: atoi( \"%s\" ) = %d\n", str, value);
}

