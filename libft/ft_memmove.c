/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icoman <icoman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 19:25:34 by icoman            #+#    #+#             */
/*   Updated: 2025/12/16 16:29:24 by icoman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dest == src || n == 0)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}
/*
int	main(void)
{
	char	s1[] = "0123456789";
	char	s2[] = "0123456789";
	ft_memmove(s1 + 1, s1, 3);
	memmove(s2 + 1, s2, 3);
	printf("ft version:   %s\n", s1);
	printf("libc version: %s\n\n", s2);
	strcpy(s1, "0123456789");
	strcpy(s2, "0123456789");
	ft_memmove(s1 + 2, s1 + 3, 3);
	memmove(s2 + 2, s2 + 3, 3);
	printf("ft version:   %s\n", s1);
	printf("libc version: %s\n", s2);
	
	return (0);
}
*/