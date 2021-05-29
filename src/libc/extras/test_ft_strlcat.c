/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:42:36 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/22 17:01:58 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dest, char *src, size_t size);

int main(void)
{
	printf("\nTest de ft_strlcat:\n");
	char *c1 = "source";
	char d2[100] = "destination";
	char d3[100] = "destination";
	char d4[100] = "destination";
	char d5[100] = "dest";
	char d6[100] = "dest";
	char d7[100] = "dest";
	printf("11, destination: %lu, %s\n", ft_strlcat(d2, c1, 5), d2);
	printf("14, destination: %lu, %s\n", ft_strlcat(d3, c1, 8), d3);
	printf("17, destinations: %lu, %s\n", ft_strlcat(d4, c1, 13), d4);
	printf("10, dest: %lu, %s\n", ft_strlcat(d5, c1, 5), d5);
	printf("10, destsou: %lu, %s\n", ft_strlcat(d6, c1, 8), d6);
	printf("10, destsource: %lu, %s\n", ft_strlcat(d7, c1, 13), d7);
	printf("11, destination: %lu, %s\n", strlcat(d2, c1, 5), d2);
	printf("14, destination: %lu, %s\n", strlcat(d3, c1, 8), d3);
	printf("17, destinations: %lu, %s\n", strlcat(d4, c1, 13), d4);
	printf("10, dest: %lu, %s\n", strlcat(d5, c1, 5), d5);
	printf("10, destsou: %lu, %s\n", strlcat(d6, c1, 8), d6);
	printf("10, destsource: %lu, %s\n", strlcat(d7, c1, 13), d7);

}