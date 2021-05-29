/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:16:30 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/21 15:07:24 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n);

int		main()
{
    char str[50];

    strcpy(str, "This is string.h library function");
    puts(str);

    ft_memset(str, '0', 7);
    puts(str);

    return (0);
}