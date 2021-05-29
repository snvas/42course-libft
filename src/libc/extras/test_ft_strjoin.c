/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:47:09 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:16:56 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
printf("\nTest de ft_strjoin:\n");
	printf("abcdef : %s\n",	ft_strjoin("abc", "def"));
	printf("abc : %s\n", ft_strjoin("", "abc"));
	printf("abc : %s\n", ft_strjoin("abc", ""));
	printf("'' : %s\n", ft_strjoin("", ""));

	}