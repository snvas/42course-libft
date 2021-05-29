/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:55:57 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:15:16 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
printf("\nTest de ft_atoi:\n");
	printf("0 : %d\n", ft_atoi("0"));
	printf("1 : %d\n", ft_atoi("1"));
	printf("10 : %d\n", ft_atoi("10"));
	printf("596 : %d\n", ft_atoi("596"));
	printf("-83 : %d\n", ft_atoi("-83"));
	printf("-2147483648 : %d\n", ft_atoi("-2147483648"));
	printf("0 : %d\n", ft_atoi("---48"));
	printf("0 : %d\n", ft_atoi("-+596"));
	printf("3 : %d\n", ft_atoi(" \t +3"));

	printf("\nTest de atoi:\n");
	printf("0 : %d\n", atoi("0"));
	printf("1 : %d\n", atoi("1"));
	printf("10 : %d\n", atoi("10"));
	printf("596 : %d\n", atoi("596"));
	printf("-83 : %d\n", atoi("-83"));
	printf("-2147483648 : %d\n", atoi("-2147483648"));
	printf("0 : %d\n", atoi("---48"));
	printf("0 : %d\n", atoi("-+596"));
	printf("3 : %d\n", atoi(" \t +3"));

	}