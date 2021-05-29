/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:06:27 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/22 16:57:13 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <bsd/string.h>

int main(void)
{
	const char src1[10]	= "ab121";
	char dest1[10]   = "12123123";

	char src[10]	= "ab121";
	char dest[10]	= "12123123";

	size_t 			nb = 8;
	unsigned int 	nb2 = 8;
	
	printf("Str: %lu, %s\n", ft_strlcpy(dest, src, nb2), dest);
	printf("Str: %lu, %s\n", strlcpy(dest, src, nb2), dest);
	printf("\nTest de ft_strlcpy :\n");
	char *c1 = "source";
	char c2[] = "destination";
	char c3[] = "destination";
	printf("6, sour : %lu, %s\n", ft_strlcpy(c2, c1, 5), c2);
	printf("6, source : %lu, %s\n", ft_strlcpy(c3, c1, 8), c3);
	printf("6, sour : %lu, %s\n", strlcpy(c2, c1, 5), c2);
	printf("6, source : %lu, %s\n", strlcpy(c3, c1, 8), c3);
	return (0);

}