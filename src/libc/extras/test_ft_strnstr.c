/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:30:08 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:17:18 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main (void) {
 	 printf("\nTest de ft_strnstr :\n");
	printf("ft_strnstr(\"bonjour\", \"ou\", 13) : our : %s\n", ft_strnstr("bonjour", "ou", 13));
	printf("ft_strnstr(\"bonjour\", \"njo\", 4) : (null) : %s\n", ft_strnstr("bonjour", "njo", 4));
	printf("ft_strnstr(\"bonjour\", \"njo\", 5) : njour : %s\n", ft_strnstr("bonjour", "njo", 5));
	//printf("strnstr(\"bonjour\", \"ou\", 13) : our : %d\n", strnstr("bonjour", "ou", 13));
//	printf("strnstr(\"bonjour\", \"njo\", 4) : (null) : %d\n", strnstr("bonjour", "njo", 4));
//	printf("strnstr(\"bonjour\", \"njo\", 5) : njour : %d\n", strnstr("bonjour", "njo", 5));
}