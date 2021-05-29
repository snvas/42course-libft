/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putchar_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:47:09 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:49:06 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	printf("\nTest de ft_putchar_fd :\na :\n");
	ft_putchar_fd('a', 1);
	int fd = open("testputchar", O_WRONLY | O_CREAT, 0777);
	ft_putchar_fd('b', fd);
	close(fd);

	}