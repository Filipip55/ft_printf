/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 12:57:27 by icoman            #+#    #+#             */
/*   Updated: 2025/12/13 13:15:20 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int main()
{
	t_list *testa = NULL;
	ft_lstadd_front(&testa, ft_lstnew("Nodo 1"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 2"));
	t_list *nodo_tmp = testa;
	while (nodo_tmp != NULL)
	{
		printf("%s\n", (char *)nodo_tmp->content);
		nodo_tmp = nodo_tmp->next;
	}
	return (0);
}
*/