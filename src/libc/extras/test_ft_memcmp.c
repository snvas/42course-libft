/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 15:54:39 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/22 14:57:09 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char s1[] = "42cadet";
    char s2[] = "42cadetabc";
    printf("Test de ft_memcmp: %d\n", ft_memcmp(s1, s2, 3));
    printf("Test de memcmp: %d\n", memcmp(s1, s2, 3));
    printf("Test de ft_memcmp: %d\n", ft_memcmp(s1, s2, 8));
    printf("Test de memcmp: %d\n", memcmp(s1, s2, 8));
    return (0);
}