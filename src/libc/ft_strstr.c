/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:27:23 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/26 21:36:11 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needled)
{
	unsigned int	pos;
	unsigned int	i;

	if (!*needled)
		return ((char *)haystack);
	pos = 0;
	while (haystack[pos] != '\0')
	{
		if (haystack[pos] == needled[0])
		{
			i = 1;
			while (needled[i] != '\0' && haystack[pos + i] == needled[i])
				++i;
			if (needled[i] == '\0')
				return ((char *)&haystack[pos]);
		}
		++pos;
	}
	return (0);
}
