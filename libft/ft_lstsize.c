/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 13:06:27 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 16:41:55 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

/*
int main()
{
	t_list *testa = ft_lstnew("Nodo 0");
	ft_lstadd_front(&testa, ft_lstnew("Nodo 1"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 2"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 3"));
	ft_lstadd_front(&testa, ft_lstnew("Nodo 4"));
	printf("%d\n", ft_lstsize(testa));
	return (0);
}
*/