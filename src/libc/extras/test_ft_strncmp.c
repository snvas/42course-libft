/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:54:39 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:17:13 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("\nTest de ft_strncmp :\n");
	printf("0 : %d\n", ft_strncmp("test", "test", 4));
	printf("-50 : %d\n", ft_strncmp("test", "test2", 5));
	printf("0 : %d\n", ft_strncmp("test", "test2", 4));
	printf("128 : %d\n", ft_strncmp("\200", "\0", 4));
	printf("1 : %d\n", ft_strncmp("tesu", "test", 6));
	printf("\nTest de strncmp :\n");
	printf("0 : %d\n", strncmp("test", "test", 4));
	printf("-50 : %d\n", strncmp("test", "test2", 5));
	printf("0 : %d\n", strncmp("test", "test2", 4));
	printf("128 : %d\n", strncmp("\200", "\0", 4));
	printf("1 : %d\n", strncmp("tesu", "test", 6));
}
