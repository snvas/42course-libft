/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memccpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:50:54 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/22 12:36:34 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int		main(void)
{
printf("Test de ft_memccpy :\n");
	char dst[100] = "destination";
	char dst2[100] = "destination";
	if (memccpy(dst, "source", ' ', 8) == ft_memccpy(dst2, "source", ' ', 8) && !strcmp(dst, dst2) && (char*)memccpy(dst, "2emesource", 'e', 8) - dst == (char*)ft_memccpy(dst2, "2emesource", 'e', 8) - dst2 && !strcmp(dst, dst2))
		printf("OK\n");
	else
		printf("Failed.\n");

		printf("-----------------------------------------------------------------------------\n");
char	src[20] = "test1 test2 CtestC";
char	dest[20] = "aaaaaaaaaa";
char	src_ft[20] = "test1 test2 CtestC";
char	dst_ft[20] = "aaaaaaaaaa";;

printf("ft_memccpy: %s\nmemccpy: %s\n",
	(char *)ft_memccpy(dst_ft, src_ft, 'C', 17),
		(char *)memccpy(dest, src, 'C', 17));
	printf("dst: %s\nsrc:%s\ndst_ft: %s\nsrc_ft: %s\n", dest, src,
			dst_ft, src_ft);
	return (0);
}