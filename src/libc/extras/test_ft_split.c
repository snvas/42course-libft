/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:55:57 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/24 23:37:16 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
printf("\nTest de ft_split :\n");
	int i;
	char **res;
	printf("Chaine s : 'bonjour a tous', separateur c : ' ', resultat :\n");
	res = ft_split("bonjour a tous", ' ');
	i = 0;
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}
	printf("Chaine s : ' bonjour a tous ', separateur c : ' ', resultat :\n");
	res = ft_split(" bonjour a tous ", ' ');
	i = 0;
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}
	printf("Chaine s : ' bonjour /a /tous ', separateur c : ' ', resultat :\n");
	res = ft_split(" bonjour /a /tous  ", ' ');
	i = 0;
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}
	printf("Chaine s : ' d  ', separateur c : ' ', resultat :\n");
	res = ft_split(" d  ", ' ');
	i = 0;
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}
	printf("Chaine s : 'nosep', separateur c : ' ', resultat :\n");
	res = ft_split("nosep", ' ');
	i = 0;
	while (res[i])
	{
		printf("'%s'\n", res[i]);
		i++;
	}

	}