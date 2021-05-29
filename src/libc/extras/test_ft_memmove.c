/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 23:00:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/17 23:01:35 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
	printf("Test de ft_memmove :\n");
	char s1[] = "string test";
	char s2[] = "string test";
	if (!strcmp(memmove(s1, s1 + 3, 5), ft_memmove(s2, s2 + 3, 5)) && !strcmp(memmove(s1 + 3, s1, 5), ft_memmove(s2 + 3, s2, 5)))
		printf("OK\n");
	else
		printf("Failed (tests : ft_memmove(s, s + 3, 5) and ft_memmove(s + 3, s, 5)).\n");

}