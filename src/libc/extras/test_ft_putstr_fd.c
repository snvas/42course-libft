/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:47:09 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:57:11 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	int fd;
	
	printf("\nTest de ft_putstr_fd : mot abc ci-dessous\n");
	ft_putstr_fd("abc", 1);
	fd = open("testputstr", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd("def", fd);
	close(fd);

	}