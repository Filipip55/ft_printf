/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:24:11 by icoman            #+#    #+#             */
/*   Updated: 2025/12/13 13:29:51 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next)
		current = current->next;
	return (current);
}
/*
int main()
{
	t_list *testa = NULL;
	ft_lstadd_front(&testa, ft_lstnew("Nodo 1"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 2"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 3"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 4"));
	printf("%s\n", (char *)ft_lstlast(testa)->content);
	return (0);
}
*/