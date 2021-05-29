/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste-ft_strlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 19:59:34 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/17 17:18:16 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> //necessário para printf

size_t	ft_strlen(const char *str);

int	main(void)
{
	//const char	str[5] = "Curso";
	//int			tamanho;

	//tamanho = ft_strlen(str);
	//printf("O tamanho da string %s vale %d\n", str, tamanho);
	
	char a[20]="Programa";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n",ft_strlen(a));
    printf("Length of string b = %zu \n",ft_strlen(b));

	printf("Length of string a = %zu \n",strlen(a));
    printf("Length of string b = %zu \n",strlen(b));
    return 0;
}
