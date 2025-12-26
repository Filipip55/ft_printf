/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 15:19:58 by icoman            #+#    #+#             */
/*   Updated: 2025/12/12 18:08:57 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int main()
{
	char a[120] = "se giri l'angolo rimettilo a posto"
	printf("ft version:   %p\n", ft_memchr(a, 's', 3));
	printf("libc version: %p\n", memchr(a, 's', 3));
	return 0;
}
*/