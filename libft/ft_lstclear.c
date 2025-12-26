/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:07:27 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 12:22:04 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || *lst == NULL || del == NULL )
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
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
	ft_lstclear(&nodo, del_content);
	printf("%d\n", ft_lstsize(nodo));
	return (0);
}
*/