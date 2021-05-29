/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:05:23 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 16:08:33 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <fcntl.h>

int	main(void)
{
	int fd;
	
	printf("\nTest de ft_putnbr_fd:");
	printf("\n0: \n");
	ft_putnbr_fd(0, 1);
	printf("\n1: \n");
	ft_putnbr_fd(1, 1);
	printf("\n100: \n");
	ft_putnbr_fd(100, 1);
	printf("\n659: \n");
	ft_putnbr_fd(659, 1);
	printf("\n-5: \n");
	ft_putnbr_fd(-5, 1);
	printf("\n-2147483648: \n");
	ft_putnbr_fd(-2147483648, 1);
	fd = open("testputnbr", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd(-593, fd);
	close(fd);
	printf("\nVerifier: 'b' dans testputchar, 'def' dans testputstr, 'ghi + nl' dans testputendl, '-593' dans testputnbr\n");
}