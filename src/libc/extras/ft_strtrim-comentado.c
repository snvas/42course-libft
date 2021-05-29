/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:58:32 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/28 17:59:22 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = 0;
/*Enquanto a s1 existir e o conjunto de caracteres a ser aparado na s1 não for nulo avança para o próximo caractere*/
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;		
	len = ft_strlen(&s1[start]);
/* Len recebe a função que calcula o tamanho da s1 a partir dos caracteres a serem aparados */	
	if (len != 0)
/* Enquanto a s1 agora na última posição e a função strrchr não for null ou seja, 
não encontrar o conjunto de caracteres a serem aparados, dimuniu uma posição */	
		while (s1[start + len - 1]
			&& ft_strrchr(set, s1[start + len - 1]) != NULL)
			len--;
/* Retorna uma substr com a s1 que deve ser aparada com a posição de start e o comprimento encontrado até os caracteres que serão aparados
*/
	return (ft_substr(s1, start, len));
}
