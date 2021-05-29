/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:55:57 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/22 23:35:51 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char *ptr;
	
printf("\nTest de ft_strdup :\n");
	ptr = ft_strdup("string");
	printf("'string' : %s\n", ptr);
	free(ptr);
}