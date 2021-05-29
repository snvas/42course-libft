/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isdigit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:22:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:15:54 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
printf("\nTest de ft_isdigit :\n");
	printf("0 : %d\n", ft_isdigit(' '));
	printf("0 : %d\n", ft_isdigit('p'));
	printf("0 : %d\n", ft_isdigit('H'));
	printf("0 : %d\n", ft_isdigit(2));
	printf("1 : %d\n", ft_isdigit('8'));

printf("\nTest de ft_isdigit :\n");
	printf("0 : %d\n", isdigit(' '));
	printf("0 : %d\n", isdigit('p'));
	printf("0 : %d\n", isdigit('H'));
	printf("0 : %d\n", isdigit(2));
	printf("1 : %d\n", isdigit('8'));
}