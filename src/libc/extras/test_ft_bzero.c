/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 15:30:13 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:15:22 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	int		i;
	char s[100] = "aaaaa";
	char sbis[100] = "aaaaa";

	printf("Test de ft_bzero:\n");
	strcpy(sbis, s);
	bzero(s, 3);
	ft_bzero(sbis, 3);
	i = 0;
	while (i < 5 && s[i] == sbis[i])
		i++;
	if (i == 5)
		printf("OK\n");
	else
		printf("Failed : expected [%c][%c][%c][%c][%c], \n"
		"got [%c][%c][%c][%c][%c].\n", s[0], s[1], s[2], s[3], s[4], sbis[0], sbis[1], sbis[2], sbis[3], sbis[4]);
}
