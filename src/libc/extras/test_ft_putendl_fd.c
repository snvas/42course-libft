/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putendl_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:59:33 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 16:01:10 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	
	int fd;
	
printf("\nTest de ft_putendl_fd\n");
	ft_putendl_fd("abc", 1);
	fd = open("testputendl", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd("ghi", fd);
	close(fd);
}