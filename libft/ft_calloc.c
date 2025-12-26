/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:09:42 by icoman            #+#    #+#             */
/*   Updated: 2025/12/12 18:06:39 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//se nmemb o size sono 0 allora restituisce un 
//ptr a un area di memoria unica di 1 byte
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	unsigned int	total_size;

	if (nmemb == 0 || size == 0)
		total_size = 1;
	else
		total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
/*
int main()
{
    void *p1 = ft_calloc(0, 0);
    void *p2 = calloc(0, 0);
    printf("ft version:   %p\n", p1);
    printf("libc version: %p\n", p2);
    free(p1);
    free(p2);
    return (0);
}
*/