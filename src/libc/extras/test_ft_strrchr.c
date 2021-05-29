/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:50:20 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:17:24 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(void){

	char *str = "strinrg";
	printf("\nTest de ft_strrchr :\n");
	printf("%p : %p\n", strrchr(str, '\0'), ft_strrchr(str, '\0'));
	printf("%p : %p\n", strrchr(str, 'r'), ft_strrchr(str, 'r'));
	
	}
