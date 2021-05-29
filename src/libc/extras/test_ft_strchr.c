/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:50:20 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:16:44 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(void){


	printf("\nTest de ft_strchr :\n");
	char *str = "strinrg";
	printf("%p : %p\n", strchr(str, ' '), ft_strchr(str, ' '));
	printf("%p : %p\n", strchr(str, '\0'), ft_strchr(str, '\0'));
	printf("%p : %p\n", strchr(str, 's'), ft_strchr(str, 's'));
	printf("%p : %p\n", strchr(str, 'g'), ft_strchr(str, 'g'));
	
	}
