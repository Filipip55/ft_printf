/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:10:24 by icoman            #+#    #+#             */
/*   Updated: 2025/12/03 14:32:49 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*
int main()
{
	char *s = "Donnie <3 Bubba";
	char *s1 = malloc(7);
	char *s2 = malloc(7);
	printf("ft version\n");
	printf("%s", (char *)ft_memcpy(s1, s, 6));
	printf("\nlibc version\n");
	printf("%s", (char *)memcpy(s2, s, 6));
	free(s1);
	free(s2);
}
*/