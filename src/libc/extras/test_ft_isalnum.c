/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 18:22:38 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:15:36 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <ctype.h>

int	main(void)
{
printf("\nTest de ft_isalnum :\n");
	printf("0 : %d\n", ft_isalnum(' '));
	printf("1 : %d\n", ft_isalnum('p'));
	printf("1 : %d\n", ft_isalnum('H'));
	printf("0 : %d\n", ft_isalnum(2));
	printf("1 : %d\n", ft_isalnum('8'));
	printf("\nTest de isalnum :\n");
	printf("0 : %d\n", isalnum(' '));
	printf("1 : %d\n", isalnum('p'));
	printf("1 : %d\n", isalnum('H'));
	printf("0 : %d\n", isalnum(2));
	printf("1 : %d\n", isalnum('8'));


	char c;
    int result;

    c = '5';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

   
	
	char f;
    printf("Enter a character: ");
    scanf("%c", &f);

    if (isalnum(f) == 0)
        printf("%c is not an alphanumeric character.", f);
    else
        printf("%c is an alphanumeric character.", f);
    
    return 0;
}