/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:24:18 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 12:37:09 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL )
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void replace_char_a(void *content)
{
	char *s = (char *)content;
    while (*s)
	{
		if (*s == 'a')
		*s = '7';
		s++;
	}
}

int main()
{
	t_list *nodo = ft_lstnew(ft_strdup("Ciao"));
	ft_lstadd_back(&nodo, ft_lstnew(ft_strdup("Miao")));
	ft_lstadd_back(&nodo, ft_lstnew(ft_strdup("Bauu")));
	ft_lstiter(nodo, replace_char_a);
	t_list *nodo_tmp = nodo;
	while (nodo_tmp != NULL)
	{
		printf("%s\n", (char *)nodo_tmp->content);
		nodo_tmp = nodo_tmp->next;
	}
	return (0);
}
*/