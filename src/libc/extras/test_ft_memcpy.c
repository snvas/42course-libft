/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 17:48:16 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/17 21:36:11 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int		main(void)
{
	char s[100] = "aaaaa";
	char sbis[100] = "aaaaa";

	printf("Test de ft_memcpy:\n");
	strcpy(sbis, s);
	if (!strcmp(memcpy(s, "source", 3), ft_memcpy(sbis, "source", 3)) && !strcmp(memcpy(s, "2emesource", 8), ft_memcpy(sbis, "2emesource", 8)))
		printf("OK\n");
	else
		printf("Failed: expected '%s', got '%s'.\n", s, sbis);
}
