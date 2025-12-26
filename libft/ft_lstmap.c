/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 12:44:13 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 16:26:31 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void del_content(void *content)
{
    free(content);
}

void *replace_char_a(void *content)
{
    char *original = (char *)content;
    char *copy;
    int i = 0;
    copy = ft_strdup(original); 
    if (!copy)
	return (NULL);
    while (copy[i])
    {
        if (copy[i] == 'a')
		copy[i] = '7';
        i++;
    }
    return (copy);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
int main()
{
	t_list *lista = ft_lstnew(ft_strdup("Ciao"));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("Miao")));
	ft_lstadd_back(&lista, ft_lstnew(ft_strdup("Bauu")));
	t_list *new = ft_lstmap(lista, replace_char_a, del_content);
	while (new != NULL)
	{
		printf("%s\n", (char *)new->content);
		new = new->next;
	}
	return (0);
}
*/