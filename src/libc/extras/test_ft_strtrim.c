/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:47:09 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/24 18:45:10 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
printf("\nTest de ft_strtrim:\n");
	printf("----------aaaaabbbbccc------: %s\n", ft_strtrim("----------aaaaabbbbccc------", "-"));
	printf("bonjou: '%s'\n", ft_strtrim("bonjour", "r"));
	//printf("'bonjour': %s\n", ft_strtrim(" bonjour ", " "));
	printf("aaaaabbbbccc: '%s'\n", ft_strtrim("aaaaabbbbccc", "ac"));
//	printf("'onjour': '%s'\n", ft_strtrim(" bonjour ", " b"));
	printf("'    bonjour    ': '%s'\n", ft_strtrim("    bonjour    ", " "));
//	printf("'bonjour': '%s'\n", ft_strtrim("bonjour ", " "));
	printf("'onjou': '%s'\n", ft_strtrim("bonjour ", "br "));
	printf("' /------onjou/  ': '%s'\n", ft_strtrim("------onjou", "  /"));
//	printf("'': '%s'\n", ft_strtrim("", " "));
	printf("'test': '%s'\n", ft_strtrim("test", "t"));
	printf("'te st': '%s'\n", ft_strtrim(" te st ", " "));
	//printf("'' : '%s'\n", ft_strtrim(" b  ", "b "));

	}