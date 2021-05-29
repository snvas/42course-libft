/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:55:57 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/22 22:01:26 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	printf("\nTest de ft_substr :\n");
	printf("njo : %s\n", ft_substr("bonjour", 2, 3));
	printf("njour : %s\n", ft_substr("bonjour", 2, 5));
	printf("njour : %s\n", ft_substr("bonjour", 2, 6));
	printf("r : %s\n", ft_substr("bonjour", 6, 1));
	printf("'' : %s\n",	ft_substr("bonjour", 6, 0));
	}