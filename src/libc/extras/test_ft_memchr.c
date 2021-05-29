/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:18:25 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:16:11 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	printf("Test de ft_memchr: \n");
	if (memchr("source", 'r', 2) == ft_memchr("source", 'r', 2) && !strcmp(memchr("source", 'r', 5), ft_memchr("source", 'r', 5)))
		printf("OK\n");
	else
		printf("Failed.\n");
}