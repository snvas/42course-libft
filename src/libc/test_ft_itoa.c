/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:47:09 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/28 22:13:08 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
printf("\nTest de ft_itoa:\n");
	printf("0 : %s\n", ft_itoa(0));
	printf("1 : %s\n", ft_itoa(1));
	printf("-1 : %s\n", ft_itoa(-1));
	printf("234 : %s\n", ft_itoa(234));
	printf("-5689 : %s\n", ft_itoa(-5689));
	printf("214748 : %s\n", ft_itoa(214748));
	printf("-214748 : %s\n", ft_itoa(-214748));
	printf("2147483647 : %s\n", ft_itoa(2147483647));
	printf("-2147483648 : %s\n", ft_itoa(-2147483648));
	printf("-2147483648 : %s\n", ft_itoa(-2147483648LL));
	}