/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 19:14:26 by icoman            #+#    #+#             */
/*   Updated: 2025/12/13 12:44:35 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*n_nodo;

	n_nodo = (t_list *)malloc(sizeof(t_list));
	if (n_nodo == NULL)
		return (NULL);
	n_nodo->content = content;
	n_nodo->next = NULL;
	return (n_nodo);
}
/*
int main(void)
{
	char *valore = "JUMP IN THE CADILLAC, GIRL LETS PUT SOME MILES ON IT!";
	t_list *mio_nodo;
	mio_nodo = ft_lstnew(valore);
	if (mio_nodo == NULL)
	{
		return (1);
	}
	printf("%s\n", (char *)mio_nodo->content);
	if (mio_nodo->next == NULL)
	printf("il puntatore al prossimo nodo è NULL.\n");
	return (0);
}
*/