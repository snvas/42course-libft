/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:27:23 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/29 00:07:08 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (len == 0)
		return ((char *)s1);
	if (ft_strlen(s1) < ft_strlen(s2))
		return (NULL);
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		while (i + j < len && s2[j] == s1[i + j] && s2[j] != '\0')
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}
