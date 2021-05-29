/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:22:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:15:48 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
printf("\nTest de ft_isascii :\n");
	printf("1 : %d\n", ft_isascii(' '));
	printf("1 : %d\n", ft_isascii('p'));
	printf("1 : %d\n", ft_isascii(2));
	printf("0 : %d\n", ft_isascii(128));

	printf("\nTest de isascii :\n");
	printf("1 : %d\n", isascii(' '));
	printf("1 : %d\n", isascii('p'));
	printf("1 : %d\n", isascii(2));
	printf("0 : %d\n", isascii(128));

}