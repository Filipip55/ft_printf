/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:30:56 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 16:41:15 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main()
{
	t_list *testa = NULL;
	ft_lstadd_back(&testa, ft_lstnew("Nodo 1"));
	ft_lstadd_back(&testa, ft_lstnew("Nodo 2"));
	t_list *nodo_tmp = testa;
	while (nodo_tmp != NULL)
	{
		printf("%s\n", (char *)nodo_tmp->content);
		nodo_tmp = nodo_tmp->next;
	}
	return (0);
}
*/