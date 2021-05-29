/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_lst-all.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snovaes <snovaes@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:15:41 by snovaes           #+#    #+#             */
/*   Updated: 2021/05/25 04:02:35 by snovaes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clean(void *content)
{
	printf("Freeing : %i\n", *((int*)content));
}

void	ft_del(void *content)
{
	*(int*)content = 0;
	return ;
}

void	ft_it(void *content)
{
	printf("%i ", *((int*)content));
}

void	*ft_m(void *content)
{
	void	*newcontent;

	newcontent = malloc(sizeof(int));
	*((int*)newcontent) = *((int*)content) + 10;
	return (newcontent);
}

int	main(void)
{
printf("\nBONUS LISTS !\n");
	int		tab[20];
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);
	printf("Test de ft_lstnew :\n");
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 0)
		printf("OK\n");
	else
		printf("Failed.\n");

	printf("\nTest de ft_lstadd_front :\n");
	int i;
	
	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	t_list	*tmp = begin;
	printf("Should print numbers from 9 to 0.\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n\nTest de ft_lstsize :\n");
	if (ft_lstsize(begin) == 10)
		printf("OK\n");
	else
		printf("Failed.\n");

	printf("\nTest de ft_lstlast :\n");
	if (*((int*)(ft_lstlast(begin)->content)) == 0)
		printf("OK\n");
	else
		printf("Failed.\n");

	printf("\nTest de ft_lstadd_back :\n");
	i = 0;
	while (++i < 10)
	{
		tab[i + 10] = -i;
		ft_lstadd_back(&begin, ft_lstnew(tab + i + 10));
	}
	tmp = begin;
	printf("Should print numbers from 9 to -9 :\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n\nTest de ft_lstdelone :\n");
	tmp = begin->next;
	ft_lstdelone(begin, ft_del);
	begin = tmp;
	printf("Should print numbers from 8 to -9 :\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n\nTest de ft_lstiter :\n");
	ft_lstiter(begin, &ft_it);

	printf("\n\nTest de ft_lstmap (+10) :\n");
	t_list		*map;
	map = ft_lstmap(begin, &ft_m, &ft_del);
	while (map)
	{
		if (begin->content)
			printf("%i ", *((int*)(map->content)));
		map = map->next;
	}

	printf("\n\nTest de ft_lstclear :\n");
	ft_lstclear(&begin, &ft_del);
	printf("Should print...nothing.\n");
	tmp = begin;
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n");
	return (0);

}