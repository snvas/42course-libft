/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:22:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:15:42 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{


printf("\nTest de ft_isalpha :\n");
	printf("0 : %d\n", ft_isalpha(' '));
	printf("1 : %d\n", ft_isalpha('p'));
	printf("1 : %d\n", ft_isalpha('H'));
	printf("0 : %d\n", ft_isalpha(2));
	printf("0 : %d\n", ft_isalpha('8'));

printf("\nTest de isalpha :\n");
	printf("0 : %d\n", isalpha(' '));
	printf("1 : %d\n", isalpha('p'));
	printf("1 : %d\n", isalpha('H'));
	printf("0 : %d\n", isalpha(2));
	printf("0 : %d\n", isalpha('8'));
}