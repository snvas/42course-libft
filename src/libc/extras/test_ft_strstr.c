/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:30:08 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/20 15:17:31 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>


int main (void) {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;
   char *retorigin;

   ret = ft_strstr(haystack, needle);

   retorigin = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   printf("The substring is: %s\n", retorigin);
   
   return(0);
}