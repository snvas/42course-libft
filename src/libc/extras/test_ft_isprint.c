/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:22:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:16:00 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
printf("\nTest de ft_isprint :\n");
	printf("1 : %d\n", ft_isprint(' '));
	printf("1 : %d\n", ft_isprint('p'));
	printf("0 : %d\n", ft_isprint(2));
	printf("1 : %d\n", ft_isprint(126));
	printf("0 : %d\n", ft_isprint(127));
}