/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:20:42 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 16:41:36 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
void del_content(void *content)
{
    free(content);
}

int main()
{
	t_list *nodo = ft_lstnew(ft_strdup("Ciao"));
	ft_lstadd_back(&nodo, ft_lstnew(ft_strdup("Nodo 1")));
	ft_lstadd_back(&nodo, ft_lstnew(ft_strdup("Nodo 2")));
	t_list *secondo = nodo->next;
	ft_lstdelone(ft_lstlast(nodo), del_content);
	secondo->next = NULL;
	t_list *nodo_tmp = nodo;
	while (nodo_tmp != NULL)
	{
		printf("%s\n", (char *)nodo_tmp->content);
		nodo_tmp = nodo_tmp->next;
	}
	return (0);
}
*/